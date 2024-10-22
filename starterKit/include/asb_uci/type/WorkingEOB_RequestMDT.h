/** @file WorkingEOB_RequestMDT.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:15 PM
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

#ifndef ASB_UCI_TYPE_WORKINGEOB_REQUESTMDT_H
#define ASB_UCI_TYPE_WORKINGEOB_REQUESTMDT_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/RequestBaseType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WorkingEOB_RequestMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class QueryMessageType;
class WorkingEOB_SourceID_ChoiceType;

/** Contains the message data for the WorkingEOB_Request message. */
class WorkingEOB_RequestMDT : public virtual uci::type::WorkingEOB_RequestMDT, public virtual RequestBaseType {
public:
  /** The constructor */
  WorkingEOB_RequestMDT();

  /** The copy constructor
    *
    * @param rhs The WorkingEOB_RequestMDT to copy from
    */
  WorkingEOB_RequestMDT(const WorkingEOB_RequestMDT& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The WorkingEOB_RequestMDT to move from
    */
  WorkingEOB_RequestMDT(WorkingEOB_RequestMDT&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The WorkingEOB_RequestMDT to copy from
    * @return The WorkingEOB_RequestMDT that was assigned
    */
  WorkingEOB_RequestMDT& operator=(const WorkingEOB_RequestMDT& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The WorkingEOB_RequestMDT to move from
    * @return The WorkingEOB_RequestMDT that was assigned
    */
  WorkingEOB_RequestMDT& operator=(WorkingEOB_RequestMDT&& rhs) = delete;

  /** The destructor */
  ~WorkingEOB_RequestMDT() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::WorkingEOB_RequestMDT whose contents are to be used to set this
    *      uci::type::WorkingEOB_RequestMDT's contents.
    */
  void copy(const uci::type::WorkingEOB_RequestMDT& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::WorkingEOB_RequestMDT whose contents are to be used to set this
    *      uci::type::WorkingEOB_RequestMDT's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::WorkingEOB_RequestMDT& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the Source field contained in this message fragment
    *
    * @return The const reference to the accessor to the Source field.
    */
  const uci::type::WorkingEOB_SourceID_ChoiceType& getSource() const override;

  /** Returns the accessor to the Source field contained in this message fragment
    *
    * @return The reference to the accessor to the Source field.
    */
  uci::type::WorkingEOB_SourceID_ChoiceType& getSource() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::WorkingEOB_RequestMDT& setSource(const uci::type::WorkingEOB_SourceID_ChoiceType& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::QueryMessageType& getSiteFilter_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::QueryMessageType& getSiteFilter() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::QueryMessageType& getSiteFilter() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::WorkingEOB_RequestMDT& setSiteFilter(const uci::type::QueryMessageType& accessor) override;

  /** Returns whether this optional field SiteFilteris available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasSiteFilter() const noexcept override;

  /** Enables the optional field such that getSiteFilter will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::QueryMessageType& enableSiteFilter(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::WorkingEOB_RequestMDT& clearSiteFilter() noexcept override;

  /** Returns the contents of the message's Temporary field
    *
    * @return The contents of the Temporary field
    */
  xs::Boolean getTemporary() const override;

  /** Sets the contents of the message's Temporary field
    *
    * @param value The new value to set the Temporary field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::WorkingEOB_RequestMDT& setTemporary(xs::Boolean value) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<WorkingEOB_RequestMDT> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::WorkingEOB_RequestMDT& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::WorkingEOB_RequestMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<WorkingEOB_SourceID_ChoiceType> source_Accessor;
  std::unique_ptr<QueryMessageType> siteFilter_Accessor;
  asb_xs::Boolean temporary_Accessor{false};

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_WORKINGEOB_REQUESTMDT_H
