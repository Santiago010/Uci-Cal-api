/** @file IFF_TransponderModesSelectionType.h
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

#ifndef ASB_UCI_TYPE_IFF_TRANSPONDERMODESSELECTIONTYPE_H
#define ASB_UCI_TYPE_IFF_TRANSPONDERMODESSELECTIONTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/OctalValueType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IFF_TransponderModesSelectionType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class IFF_Mode5DetailsType;
class IFF_ModeS_Type;

/** See annotations in child elements and messages/elements that use this type for details. */
class IFF_TransponderModesSelectionType : public virtual uci::type::IFF_TransponderModesSelectionType {
public:
  /** The constructor */
  IFF_TransponderModesSelectionType();

  /** The copy constructor
    *
    * @param rhs The IFF_TransponderModesSelectionType to copy from
    */
  IFF_TransponderModesSelectionType(const IFF_TransponderModesSelectionType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The IFF_TransponderModesSelectionType to move from
    */
  IFF_TransponderModesSelectionType(IFF_TransponderModesSelectionType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The IFF_TransponderModesSelectionType to copy from
    * @return The IFF_TransponderModesSelectionType that was assigned
    */
  IFF_TransponderModesSelectionType& operator=(const IFF_TransponderModesSelectionType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The IFF_TransponderModesSelectionType to move from
    * @return The IFF_TransponderModesSelectionType that was assigned
    */
  IFF_TransponderModesSelectionType& operator=(IFF_TransponderModesSelectionType&& rhs) = delete;

  /** The destructor */
  virtual ~IFF_TransponderModesSelectionType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::IFF_TransponderModesSelectionType whose contents are to be used to set this
    *      uci::type::IFF_TransponderModesSelectionType's contents.
    */
  void copy(const uci::type::IFF_TransponderModesSelectionType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::IFF_TransponderModesSelectionType whose contents are to be used to set this
    *      uci::type::IFF_TransponderModesSelectionType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::IFF_TransponderModesSelectionType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::OctalValueType& getMode1_Code_() const;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  const uci::type::OctalValueType& getMode1_Code() const override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::OctalValueType& getMode1_Code() override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_TransponderModesSelectionType& setMode1_Code(const uci::type::OctalValueType& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_TransponderModesSelectionType& setMode1_Code(const std::string& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_TransponderModesSelectionType& setMode1_Code(const char* value) override;

  /** Returns whether this optional field mode1_Code_is available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMode1_Code() const noexcept override;

  /** Enables the optional field such that getMode1_Code will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The value of the optional field
    */
  uci::type::OctalValueType& enableMode1_Code(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_TransponderModesSelectionType& clearMode1_Code() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::OctalValueType& getMode2_Code_() const;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  const uci::type::OctalValueType& getMode2_Code() const override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::OctalValueType& getMode2_Code() override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_TransponderModesSelectionType& setMode2_Code(const uci::type::OctalValueType& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_TransponderModesSelectionType& setMode2_Code(const std::string& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_TransponderModesSelectionType& setMode2_Code(const char* value) override;

  /** Returns whether this optional field mode2_Code_is available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMode2_Code() const noexcept override;

  /** Enables the optional field such that getMode2_Code will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The value of the optional field
    */
  uci::type::OctalValueType& enableMode2_Code(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_TransponderModesSelectionType& clearMode2_Code() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::OctalValueType& getMode3A_Code_() const;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  const uci::type::OctalValueType& getMode3A_Code() const override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::OctalValueType& getMode3A_Code() override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_TransponderModesSelectionType& setMode3A_Code(const uci::type::OctalValueType& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_TransponderModesSelectionType& setMode3A_Code(const std::string& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_TransponderModesSelectionType& setMode3A_Code(const char* value) override;

  /** Returns whether this optional field mode3A_Code_is available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMode3A_Code() const noexcept override;

  /** Enables the optional field such that getMode3A_Code will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The value of the optional field
    */
  uci::type::OctalValueType& enableMode3A_Code(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_TransponderModesSelectionType& clearMode3A_Code() noexcept override;

  /** Returns the contents of the message's ModeC_Enable field
    *
    * @return The contents of the ModeC_Enable field
    */
  xs::Boolean getModeC_Enable() const override;

  /** Sets the contents of the message's ModeC_Enable field
    *
    * @param value The new value to set the ModeC_Enable field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_TransponderModesSelectionType& setModeC_Enable(xs::Boolean value) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::IFF_Mode5DetailsType& getMode5_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::IFF_Mode5DetailsType& getMode5() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::IFF_Mode5DetailsType& getMode5() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_TransponderModesSelectionType& setMode5(const uci::type::IFF_Mode5DetailsType& accessor) override;

  /** Returns whether this optional field Mode5is available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMode5() const noexcept override;

  /** Enables the optional field such that getMode5 will return the optional field and not throw an exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::IFF_Mode5DetailsType& enableMode5(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_TransponderModesSelectionType& clearMode5() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::IFF_ModeS_Type& getModeS_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::IFF_ModeS_Type& getModeS() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::IFF_ModeS_Type& getModeS() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_TransponderModesSelectionType& setModeS(const uci::type::IFF_ModeS_Type& accessor) override;

  /** Returns whether this optional field ModeSis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasModeS() const noexcept override;

  /** Enables the optional field such that getModeS will return the optional field and not throw an exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::IFF_ModeS_Type& enableModeS(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_TransponderModesSelectionType& clearModeS() noexcept override;

  /** Returns the contents of the message's ADS_B_Enable field
    *
    * @return The contents of the ADS_B_Enable field
    */
  xs::Boolean getADS_B_Enable() const override;

  /** Sets the contents of the message's ADS_B_Enable field
    *
    * @param value The new value to set the ADS_B_Enable field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_TransponderModesSelectionType& setADS_B_Enable(xs::Boolean value) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<IFF_TransponderModesSelectionType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::IFF_TransponderModesSelectionType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::IFF_TransponderModesSelectionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<OctalValueType> mode1_Code_Accessor;
  std::unique_ptr<OctalValueType> mode2_Code_Accessor;
  std::unique_ptr<OctalValueType> mode3A_Code_Accessor;
  asb_xs::Boolean modeC_Enable_Accessor{false};
  std::unique_ptr<IFF_Mode5DetailsType> mode5_Accessor;
  std::unique_ptr<IFF_ModeS_Type> modeS_Accessor;
  asb_xs::Boolean aDS_B_Enable_Accessor{false};

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_IFF_TRANSPONDERMODESSELECTIONTYPE_H
