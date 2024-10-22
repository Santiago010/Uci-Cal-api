/** @file RequestingFunctionID_ChoiceType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:14 PM
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

#ifndef ASB_UCI_TYPE_REQUESTINGFUNCTIONID_CHOICETYPE_H
#define ASB_UCI_TYPE_REQUESTINGFUNCTIONID_CHOICETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../../cppInterface/2.3.2/include/uci/base/Accessor.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequestingFunctionID_ChoiceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ActivityID_Type;
class BIT_ID_Type;
class CalibrationID_Type;

/** This type provides the correlation between an activity, a BIT, or a Calibration and a subsystem's
  * RF_ResourceAllocationRequest.
  */
class RequestingFunctionID_ChoiceType : public virtual uci::type::RequestingFunctionID_ChoiceType {
public:
  /** The constructor */
  RequestingFunctionID_ChoiceType();

  /** The copy constructor
    *
    * @param rhs The RequestingFunctionID_ChoiceType to copy from
    */
  RequestingFunctionID_ChoiceType(const RequestingFunctionID_ChoiceType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The RequestingFunctionID_ChoiceType to move from
    */
  RequestingFunctionID_ChoiceType(RequestingFunctionID_ChoiceType&& rhs) = delete;

  /** The assignment operator [not supported]
    *
    * @param rhs The RequestingFunctionID_ChoiceType to copy from
    * @return The RequestingFunctionID_ChoiceType that was assigned
    */
  RequestingFunctionID_ChoiceType& operator=(const RequestingFunctionID_ChoiceType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The RequestingFunctionID_ChoiceType to move from
    * @return The RequestingFunctionID_ChoiceType that was assigned
    */
  RequestingFunctionID_ChoiceType& operator=(RequestingFunctionID_ChoiceType&& rhs) = delete;

  /** The destructor */
  virtual ~RequestingFunctionID_ChoiceType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RequestingFunctionID_ChoiceType whose contents are to be used to set this
    *      uci::type::RequestingFunctionID_ChoiceType's contents.
    */
  void copy(const uci::type::RequestingFunctionID_ChoiceType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RequestingFunctionID_ChoiceType whose contents are to be used to set this
    *      uci::type::RequestingFunctionID_ChoiceType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::RequestingFunctionID_ChoiceType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value
    */
  uci::type::RequestingFunctionID_ChoiceType::RequestingFunctionID_ChoiceTypeChoice getRequestingFunctionID_ChoiceTypeChoiceOrdinal() const noexcept override;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getRequestingFunctionID_ChoiceTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In
    * addition, the access methods associated with the chosen element will be enabled and will provide access to the chosen
    * element.
    *
    * @param ordinal The ordinal to set this choice's selected ordinal to.
    * @param type The type of data that is to be made available when the ordinal is set.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequestingFunctionID_ChoiceType& setRequestingFunctionID_ChoiceTypeChoiceOrdinal(uci::type::RequestingFunctionID_ChoiceType::RequestingFunctionID_ChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the ActivityID field contained in this message fragment
    *
    * @return The const reference to the accessor to the ActivityID field.
    */
  uci::type::ActivityID_Type& getActivityID_() const;

  /** Returns the accessor to the ActivityID field contained in this message fragment
    *
    * @return The reference to the accessor to the ActivityID field.
    */
  const uci::type::ActivityID_Type& getActivityID() const override;

  /** Returns the accessor to the ActivityID field contained in this message fragment
    *
    * @return The reference to the accessor to the ActivityID field.
    */
  uci::type::ActivityID_Type& getActivityID() override;

  /** Sets this choice's choice to be activityID and initializes activityID to be the specified value. A deep copy will be
    * used by this method to set activityID
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequestingFunctionID_ChoiceType& setActivityID(const uci::type::ActivityID_Type& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by ActivityID.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by ActivityID, false otherwise.
    */
  bool isActivityID() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by ActivityID.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by ActivityID.
    */
  uci::type::ActivityID_Type& chooseActivityID(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by ActivityID.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by ActivityID.
    */
  uci::type::ActivityID_Type& chooseActivityID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the BIT_ID field contained in this message fragment
    *
    * @return The const reference to the accessor to the BIT_ID field.
    */
  uci::type::BIT_ID_Type& getBIT_ID_() const;

  /** Returns the accessor to the BIT_ID field contained in this message fragment
    *
    * @return The reference to the accessor to the BIT_ID field.
    */
  const uci::type::BIT_ID_Type& getBIT_ID() const override;

  /** Returns the accessor to the BIT_ID field contained in this message fragment
    *
    * @return The reference to the accessor to the BIT_ID field.
    */
  uci::type::BIT_ID_Type& getBIT_ID() override;

  /** Sets this choice's choice to be bIT_ID and initializes bIT_ID to be the specified value. A deep copy will be used by
    * this method to set bIT_ID
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequestingFunctionID_ChoiceType& setBIT_ID(const uci::type::BIT_ID_Type& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by BIT_ID.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by BIT_ID, false otherwise.
    */
  bool isBIT_ID() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by BIT_ID.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by BIT_ID.
    */
  uci::type::BIT_ID_Type& chooseBIT_ID(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by BIT_ID.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by BIT_ID.
    */
  uci::type::BIT_ID_Type& chooseBIT_ID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the CalibrationID field contained in this message fragment
    *
    * @return The const reference to the accessor to the CalibrationID field.
    */
  uci::type::CalibrationID_Type& getCalibrationID_() const;

  /** Returns the accessor to the CalibrationID field contained in this message fragment
    *
    * @return The reference to the accessor to the CalibrationID field.
    */
  const uci::type::CalibrationID_Type& getCalibrationID() const override;

  /** Returns the accessor to the CalibrationID field contained in this message fragment
    *
    * @return The reference to the accessor to the CalibrationID field.
    */
  uci::type::CalibrationID_Type& getCalibrationID() override;

  /** Sets this choice's choice to be calibrationID and initializes calibrationID to be the specified value. A deep copy
    * will be used by this method to set calibrationID
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequestingFunctionID_ChoiceType& setCalibrationID(const uci::type::CalibrationID_Type& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by CalibrationID.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by CalibrationID, false otherwise.
    */
  bool isCalibrationID() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by CalibrationID.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by CalibrationID.
    */
  uci::type::CalibrationID_Type& chooseCalibrationID(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by CalibrationID.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by CalibrationID.
    */
  uci::type::CalibrationID_Type& chooseCalibrationID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<RequestingFunctionID_ChoiceType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::RequestingFunctionID_ChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::RequestingFunctionID_ChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<ActivityID_Type> activityID_Accessor;
  std::unique_ptr<BIT_ID_Type> bIT_ID_Accessor;
  std::unique_ptr<CalibrationID_Type> calibrationID_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_REQUESTINGFUNCTIONID_CHOICETYPE_H
