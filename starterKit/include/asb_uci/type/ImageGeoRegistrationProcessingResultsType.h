/** @file ImageGeoRegistrationProcessingResultsType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:13 PM
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

#ifndef ASB_UCI_TYPE_IMAGEGEOREGISTRATIONPROCESSINGRESULTSTYPE_H
#define ASB_UCI_TYPE_IMAGEGEOREGISTRATIONPROCESSINGRESULTSTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/ProcessingResultsPET.h"
#include "../../../include/asb_uci/type/UnitBallDoubleType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ImageGeoRegistrationProcessingResultsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** This is a polymorphic extension which allows for the extension of the base ProcessingResultsPET for data output from
  * a generic image geo-registration algorithm.
  */
class ImageGeoRegistrationProcessingResultsType : public virtual uci::type::ImageGeoRegistrationProcessingResultsType, public virtual ProcessingResultsPET {
public:
  /** The constructor */
  ImageGeoRegistrationProcessingResultsType();

  /** The copy constructor
    *
    * @param rhs The ImageGeoRegistrationProcessingResultsType to copy from
    */
  ImageGeoRegistrationProcessingResultsType(const ImageGeoRegistrationProcessingResultsType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The ImageGeoRegistrationProcessingResultsType to move from
    */
  ImageGeoRegistrationProcessingResultsType(ImageGeoRegistrationProcessingResultsType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The ImageGeoRegistrationProcessingResultsType to copy from
    * @return The ImageGeoRegistrationProcessingResultsType that was assigned
    */
  ImageGeoRegistrationProcessingResultsType& operator=(const ImageGeoRegistrationProcessingResultsType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The ImageGeoRegistrationProcessingResultsType to move from
    * @return The ImageGeoRegistrationProcessingResultsType that was assigned
    */
  ImageGeoRegistrationProcessingResultsType& operator=(ImageGeoRegistrationProcessingResultsType&& rhs) = delete;

  /** The destructor */
  ~ImageGeoRegistrationProcessingResultsType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ImageGeoRegistrationProcessingResultsType whose contents are to be used to set this
    *      uci::type::ImageGeoRegistrationProcessingResultsType's contents.
    */
  void copy(const uci::type::ImageGeoRegistrationProcessingResultsType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ImageGeoRegistrationProcessingResultsType whose contents are to be used to set this
    *      uci::type::ImageGeoRegistrationProcessingResultsType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::ImageGeoRegistrationProcessingResultsType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's GeoRegistrationQuality field
    *
    * @return The contents of the GeoRegistrationQuality field
    */
  uci::type::UnitBallDoubleTypeValue getGeoRegistrationQuality() const override;

  /** Sets the contents of the message's GeoRegistrationQuality field
    *
    * @param value The new value to set the GeoRegistrationQuality field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ImageGeoRegistrationProcessingResultsType& setGeoRegistrationQuality(uci::type::UnitBallDoubleTypeValue value) override;

  /** Returns the contents of the message's RegistrationResidual field
    *
    * @return The contents of the RegistrationResidual field
    */
  xs::Double getRegistrationResidual() const override;

  /** Sets the contents of the message's RegistrationResidual field
    *
    * @param value The new value to set the RegistrationResidual field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ImageGeoRegistrationProcessingResultsType& setRegistrationResidual(xs::Double value) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<ImageGeoRegistrationProcessingResultsType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::ImageGeoRegistrationProcessingResultsType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

  /** 
    *
    * @param accessor .
    * @param propTree .
    * @param nodeName .
    * @param createNode .
    * @param addTypeAttribute .
    * @param checkIfDerivation .
    * @param topLevel .
    * @return .
    */
  static std::string serialize(const uci::type::ImageGeoRegistrationProcessingResultsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  UnitBallDoubleTypeValue geoRegistrationQuality_Accessor{0.0};
  asb_xs::Double registrationResidual_Accessor{0.0};

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_IMAGEGEOREGISTRATIONPROCESSINGRESULTSTYPE_H
