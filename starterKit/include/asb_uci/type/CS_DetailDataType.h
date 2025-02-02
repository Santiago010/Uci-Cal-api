/** @file CS_DetailDataType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:12 PM
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

#ifndef ASB_UCI_TYPE_CS_DETAILDATATYPE_H
#define ASB_UCI_TYPE_CS_DETAILDATATYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/FrequencyType.h"
#include "../../../include/asb_uci/type/ModulationEnum.h"
#include "../../../include/asb_uci/type/PolarizationEnum.h"
#include "../../../include/asb_uci/type/VisibleString32Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CS_DetailDataType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CS_SubDetailDataType;
class FileLocationID_Type;
class ForeignKeyType;

/** This type represents lower level signal details for a CounterSpace task/engagement. */
class CS_DetailDataType : public virtual uci::type::CS_DetailDataType {
public:
  /** Signal data additional parameters. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  using SubDetailData = asb_uci::base::BoundedList<uci::type::CS_SubDetailDataType, uci::type::accessorType::cS_SubDetailDataType, asb_uci::type::CS_SubDetailDataType>;

  /** The constructor */
  CS_DetailDataType();

  /** The copy constructor
    *
    * @param rhs The CS_DetailDataType to copy from
    */
  CS_DetailDataType(const CS_DetailDataType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The CS_DetailDataType to move from
    */
  CS_DetailDataType(CS_DetailDataType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The CS_DetailDataType to copy from
    * @return The CS_DetailDataType that was assigned
    */
  CS_DetailDataType& operator=(const CS_DetailDataType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The CS_DetailDataType to move from
    * @return The CS_DetailDataType that was assigned
    */
  CS_DetailDataType& operator=(CS_DetailDataType&& rhs) = delete;

  /** The destructor */
  virtual ~CS_DetailDataType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CS_DetailDataType whose contents are to be used to set this
    *      uci::type::CS_DetailDataType's contents.
    */
  void copy(const uci::type::CS_DetailDataType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CS_DetailDataType whose contents are to be used to set this
    *      uci::type::CS_DetailDataType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::CS_DetailDataType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's Name field
    *
    * @return The contents of the Name field
    */
  const uci::type::VisibleString32Type& getName() const noexcept override;

  /** Returns the contents of the message's Name field
    *
    * @return The contents of the Name field
    */
  uci::type::VisibleString32Type& getName() noexcept override;

  /** Sets the contents of the message's Name field
    *
    * @param value The new value to set the Name field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& setName(const uci::type::VisibleString32Type& value) override;

  /** Sets the contents of the message's Name field
    *
    * @param value The new value to set the Name field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& setName(const std::string& value) override;

  /** Sets the contents of the message's Name field
    *
    * @param value The new value to set the Name field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& setName(const char* value) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FileLocationID_Type& getDetailsID_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::FileLocationID_Type& getDetailsID() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FileLocationID_Type& getDetailsID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& setDetailsID(const uci::type::FileLocationID_Type& accessor) override;

  /** Returns whether this optional field DetailsIDis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDetailsID() const noexcept override;

  /** Enables the optional field such that getDetailsID will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FileLocationID_Type& enableDetailsID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& clearDetailsID() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ForeignKeyType& getSignal_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ForeignKeyType& getSignal() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ForeignKeyType& getSignal() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& setSignal(const uci::type::ForeignKeyType& accessor) override;

  /** Returns whether this optional field Signalis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasSignal() const noexcept override;

  /** Enables the optional field such that getSignal will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ForeignKeyType& enableSignal(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& clearSignal() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::FrequencyTypeValue getUplinkFrequency() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& setUplinkFrequency(uci::type::FrequencyTypeValue value) override;

  /** Returns whether this optional field UplinkFrequencyis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasUplinkFrequency() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& clearUplinkFrequency() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PolarizationEnum& getUplinkPolarization_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::PolarizationEnum& getUplinkPolarization() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PolarizationEnum& getUplinkPolarization() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& setUplinkPolarization(const uci::type::PolarizationEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& setUplinkPolarization(uci::type::PolarizationEnum::EnumerationItem value) override;

  /** Returns whether this optional field UplinkPolarizationis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasUplinkPolarization() const noexcept override;

  /** Enables the optional field such that getUplinkPolarization will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PolarizationEnum& enableUplinkPolarization(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& clearUplinkPolarization() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::FrequencyTypeValue getDownlinkFrequency() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& setDownlinkFrequency(uci::type::FrequencyTypeValue value) override;

  /** Returns whether this optional field DownlinkFrequencyis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDownlinkFrequency() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& clearDownlinkFrequency() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PolarizationEnum& getDownlinkPolarization_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::PolarizationEnum& getDownlinkPolarization() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PolarizationEnum& getDownlinkPolarization() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& setDownlinkPolarization(const uci::type::PolarizationEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& setDownlinkPolarization(uci::type::PolarizationEnum::EnumerationItem value) override;

  /** Returns whether this optional field DownlinkPolarizationis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDownlinkPolarization() const noexcept override;

  /** Enables the optional field such that getDownlinkPolarization will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PolarizationEnum& enableDownlinkPolarization(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& clearDownlinkPolarization() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ModulationEnum& getModulation_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ModulationEnum& getModulation() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ModulationEnum& getModulation() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& setModulation(const uci::type::ModulationEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& setModulation(uci::type::ModulationEnum::EnumerationItem value) override;

  /** Returns whether this optional field Modulationis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasModulation() const noexcept override;

  /** Enables the optional field such that getModulation will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ModulationEnum& enableModulation(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& clearModulation() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::FrequencyTypeValue getBandwidth() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& setBandwidth(uci::type::FrequencyTypeValue value) override;

  /** Returns whether this optional field Bandwidthis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasBandwidth() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& clearBandwidth() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FileLocationID_Type& getAttributesID_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::FileLocationID_Type& getAttributesID() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FileLocationID_Type& getAttributesID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& setAttributesID(const uci::type::FileLocationID_Type& accessor) override;

  /** Returns whether this optional field AttributesIDis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasAttributesID() const noexcept override;

  /** Enables the optional field such that getAttributesID will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FileLocationID_Type& enableAttributesID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& clearAttributesID() noexcept override;

  /** Returns the accessor to the SubDetailData field contained in this message fragment
    *
    * @return The const reference to the accessor to the SubDetailData field.
    */
  const uci::type::CS_DetailDataType::SubDetailData& getSubDetailData() const override;

  /** Returns the accessor to the SubDetailData field contained in this message fragment
    *
    * @return The reference to the accessor to the SubDetailData field.
    */
  uci::type::CS_DetailDataType::SubDetailData& getSubDetailData() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CS_DetailDataType& setSubDetailData(const uci::type::CS_DetailDataType::SubDetailData& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<CS_DetailDataType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::CS_DetailDataType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::CS_DetailDataType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<VisibleString32Type> name_Accessor;
  std::unique_ptr<FileLocationID_Type> detailsID_Accessor;
  std::unique_ptr<ForeignKeyType> signal_Accessor;
  boost::optional<FrequencyTypeValue> uplinkFrequency_Accessor;
  std::unique_ptr<PolarizationEnum> uplinkPolarization_Accessor;
  boost::optional<FrequencyTypeValue> downlinkFrequency_Accessor;
  std::unique_ptr<PolarizationEnum> downlinkPolarization_Accessor;
  std::unique_ptr<ModulationEnum> modulation_Accessor;
  boost::optional<FrequencyTypeValue> bandwidth_Accessor;
  std::unique_ptr<FileLocationID_Type> attributesID_Accessor;
  std::unique_ptr<SubDetailData> subDetailData_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_CS_DETAILDATATYPE_H
