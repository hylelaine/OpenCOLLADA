/*
    Copyright (c) 2008 NetAllied Systems GmbH
	
    Licensed under the MIT Open Source License, 
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/


#ifndef __COLLADAMAX_IMAGE_EXPORTER_H__
#define __COLLADAMAX_IMAGE_EXPORTER_H__

#include "COLLADAMaxPrerequisites.h"

#include "COLLADAStreamWriter.h"
#include "COLLADALibraryImages.h"

#include "COLLADAMaxEffectExporter.h"
#include "COLLADAMaxDocumentExporter.h"

namespace COLLADAMax
{


    /** This class writes the @a \<library_images\>. It uses informations created by an effect exporter.*/

    class ImageExporter : public COLLADA::LibraryImages
    {

    private:
        /** Map of image filenames and image ids.*/
        const ExportedImageMap & mExportedImageMap;

    public:
        /**
        @param streamWriter The stream the output will be written to
        @param documentExporter The document exporter this material exporter is used in*/
        ImageExporter ( COLLADA::StreamWriter * streamWriter, DocumentExporter * documentExporter );
        virtual ~ImageExporter()
        {}

        /** Exports the library images.*/
        void doExport();

    private:
        ImageExporter ( const ImageExporter & imageExporter );
        ImageExporter &operator= ( const ImageExporter & imageExporter );

    };
}

#endif //__COLLADAMAX_IMAGE_EXPORTER_H__