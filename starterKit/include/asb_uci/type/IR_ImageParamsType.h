/** @file IR_ImageParamsType.h
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

#ifndef ASB_UCI_TYPE_IR_IMAGEPARAMSTYPE_H
#define ASB_UCI_TYPE_IR_IMAGEPARAMSTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/DistanceType.h"
#include "../../../include/asb_uci/type/DurationType.h"
#include "../../../include/asb_uci/type/TemperatureType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IR_ImageParamsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class FrequencyRangeType;

/** The Infra-red Image parameters describe the desired images to collect. The spectral frequency indicates the size of
  * the wavelength to collect. The temperature resolution is amount of temperature variance to measure. The optional Ir
  * Image setting indicates the range of the IR frequency to measure. The optional product resolution time parameter is
  * the minimum amount of time needed to get the desired level of resolution for the product.
  */
class IR_ImageParamsType : public virtual uci::type::IR_ImageParamsType {
public:
  /** The constructor */
  IR_ImageParamsType();

  /** The copy constructor
    *
    * @param rhs The IR_ImageParamsType to copy from
    */
  IR_ImageParamsType(const IR_ImageParamsType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The IR_ImageParamsType to move from
    */
  IR_ImageParamsType(IR_ImageParamsType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The IR_ImageParamsType to copy from
    * @return The IR_ImageParamsType that was assigned
    */
  IR_ImageParamsType& operator=(const IR_ImageParamsType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The IR_ImageParamsType to move from
    * @return The IR_ImageParamsType that was assigned
    */
  IR_ImageParamsType& operator=(IR_ImageParamsType&& rhs) = delete;

  /** The destructor */
  virtual ~IR_ImageParamsType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::IR_ImageParamsType whose contents are to be used to set this
    *      uci::type::IR_ImageParamsType's contents.
    */
  void copy(const uci::type::IR_ImageParamsType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::IR_ImageParamsType whose contents are to be used to set this
    *      uci::type::IR_ImageParamsType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::IR_ImageParamsType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DistanceTypeValue getSpectralFrequencyResolution() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IR_ImageParamsType& setSpectralFrequencyResolution(uci::type::DistanceTypeValue value) override;

  /** Returns whether this optional field SpectralFrequencyResolutionis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasSpectralFrequencyResolution() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IR_ImageParamsType& clearSpectralFrequencyResolution() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::TemperatureTypeValue getTemperatureResolution() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IR_ImageParamsType& setTemperatureResolution(uci::type::TemperatureTypeValue value) override;

  /** Returns whether this optional field TemperatureResolutionis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasTemperatureResolution() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IR_ImageParamsType& clearTemperatureResolution() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FrequencyRangeType& getIR_ImageSetting_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::FrequencyRangeType& getIR_ImageSetting() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FrequencyRangeType& getIR_ImageSetting() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::IR_ImageParamsType& setIR_ImageSetting(const uci::type::FrequencyRangeType& accessor) override;

  /** Returns whether this optional field IR_ImageSettingis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasIR_ImageSetting() const noexcept override;

  /** Enables the optional field such that getIR_ImageSetting will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FrequencyRangeType& enableIR_ImageSetting(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IR_ImageParamsType& clearIR_ImageSetting() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DurationTypeValue getProductResolutionTime() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IR_ImageParamsType& setProductResolutionTime(uci::type::DurationTypeValue value) override;

  /** Returns whether this optional field ProductResolutionTimeis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasProductResolutionTime() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IR_ImageParamsType& clearProductResolutionTime() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<IR_ImageParamsType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::IR_ImageParamsType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::IR_ImageParamsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  boost::optional<DistanceTypeValue> spectralFrequencyResolution_Accessor;
  boost::optional<TemperatureTypeValue> temperatureResolution_Accessor;
  std::unique_ptr<FrequencyRangeType> iR_ImageSetting_Accessor;
  boost::optional<DurationTypeValue> productResolutionTime_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_IR_IMAGEPARAMSTYPE_H
