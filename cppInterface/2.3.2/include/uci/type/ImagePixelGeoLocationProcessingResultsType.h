/** @file ImagePixelGeoLocationProcessingResultsType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:07 PM
 *
 * <pre>
 * Unclassified               U N C L A S S I F I E D               Unclassified
 *
 * DISTRIBUTION STATEMENT D: Distribution authorized to Department of Defense
 *    and U.S. DoD contractors only, Critical Technology, Export Controlled,
 *    26 January 2023. Other requests for this document shall be referred to
 *    AFLCMC/XA (OAMO), Wright-Patterson AFB OH 45433.
 *
 * DESTRUCTION NOTICE: Destroy by any method that will prevent disclosure of
 *    contents or reconstruction of the document.
 *
 * WARNING - This document contains technical data whose export is restricted
 *    by the Arms Export Control Act (Section 2751 of Title 22, United States
 *    Code) or the Export Control Reform Act of 2018 (Chapter 58 Sections
 *    4801-4852 of Title 50, United States Code). Violations of these export
 *    laws are subject to severe criminal penalties. Disseminate in accordance
 *    with provisions of DoD Directive 5230.25 and DoD Instruction 2040.02.
 *
 * Controlled by: USAF
 * Controlled by: AFLCMC/XA (OAMO)
 * CUI Category(ies): CTI, EXPT
 * Distribution Statement D
 * POC: Wayne Artuso, 937-713-5124
 *
 * CUI//SP-CTI/SP-EXPT
 * </pre>
 *
 */

#ifndef UCI_TYPE_IMAGEPIXELGEOLOCATIONPROCESSINGRESULTSTYPE_H
#define UCI_TYPE_IMAGEPIXELGEOLOCATIONPROCESSINGRESULTSTYPE_H

#include "../base/BoundedList.h"
#include "../base/export.h"
#include "PixelOutputDataType.h"
#include "ProcessingResultsPET.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all base data types are declared */
namespace base {

class AbstractServiceBusConnection;

} // namespace base
} // namespace uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** This is a polymorphic extension which allows for the extension of the base ProcessingResultsPET for data output from
  * a generic pixel geo-location algorithm.
  */
class ImagePixelGeoLocationProcessingResultsType : public virtual ProcessingResultsPET {
public:

  /** This method constructs a new ImagePixelGeoLocationProcessingResultsType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ImagePixelGeoLocationProcessingResultsType.
    */
  static UCI_EXPORT ImagePixelGeoLocationProcessingResultsType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ImagePixelGeoLocationProcessingResultsType initializing the data accessed by the new
    * ImagePixelGeoLocationProcessingResultsType using the data accessed by the specified
    * ImagePixelGeoLocationProcessingResultsType (cloning).
    *
    * @param accessor The ImagePixelGeoLocationProcessingResultsType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created ImagePixelGeoLocationProcessingResultsType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ImagePixelGeoLocationProcessingResultsType.
    */
  static UCI_EXPORT ImagePixelGeoLocationProcessingResultsType& create(const ImagePixelGeoLocationProcessingResultsType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ImagePixelGeoLocationProcessingResultsType. Use of the specified accessor after it
    * has been destroyed will result in undefined behavior.
    *
    * @param accessor The ImagePixelGeoLocationProcessingResultsType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ImagePixelGeoLocationProcessingResultsType& accessor);

  /** Returns this accessor's type constant, i.e. imagePixelGeoLocationProcessingResultsType.
    *
    * @return This accessor's type constant, i.e. imagePixelGeoLocationProcessingResultsType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::imagePixelGeoLocationProcessingResultsType;
  }

  /** Returns the version that was initialized from the uci:version attribute of
    * ImagePixelGeoLocationProcessingResultsType.
    *
    * @return The version that was initialized from the uci:version attribute of
    *      ImagePixelGeoLocationProcessingResultsType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ImagePixelGeoLocationProcessingResultsType& accessor) = 0;

  /** These are the specific pixels from the source image for which the processing algorithms should generate
    * geo-locations. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::PixelOutputDataType, uci::type::accessorType::pixelOutputDataType> Pixel;

  /** Returns a const reference to the bounded list identified by Pixel.
    *
    * @return A const reference to the bounded list identified by Pixel.
    */
  virtual const uci::type::ImagePixelGeoLocationProcessingResultsType::Pixel& getPixel() const = 0;

  /** Returns a reference to the bounded list identified by Pixel.
    *
    * @return A reference to the bounded list identified by Pixel.
    */
  virtual uci::type::ImagePixelGeoLocationProcessingResultsType::Pixel& getPixel() = 0;

  /** Sets the bounded list identified by Pixel.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImagePixelGeoLocationProcessingResultsType& setPixel(const uci::type::ImagePixelGeoLocationProcessingResultsType::Pixel& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ImagePixelGeoLocationProcessingResultsType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ImagePixelGeoLocationProcessingResultsType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ImagePixelGeoLocationProcessingResultsType to copy from.
    */
  ImagePixelGeoLocationProcessingResultsType(const ImagePixelGeoLocationProcessingResultsType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ImagePixelGeoLocationProcessingResultsType to the contents of the
    * ImagePixelGeoLocationProcessingResultsType on the right hand side (rhs) of the assignment operator [only available to
    * derived classes].
    *
    * @param rhs The ImagePixelGeoLocationProcessingResultsType on the right hand side (rhs) of the assignment operator
    *      whose contents are used to set the contents of this ImagePixelGeoLocationProcessingResultsType.
    * @return A reference to this ImagePixelGeoLocationProcessingResultsType.
    */
  ImagePixelGeoLocationProcessingResultsType& operator=(const ImagePixelGeoLocationProcessingResultsType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_IMAGEPIXELGEOLOCATIONPROCESSINGRESULTSTYPE_H

