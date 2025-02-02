/** @file RouteType.h
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

#ifndef ASB_UCI_TYPE_ROUTETYPE_H
#define ASB_UCI_TYPE_ROUTETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/LineProjectionEnum.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RouteType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class PathID_Type;
class RemarksType;
class RoutePathType;

/** See annotations in child elements and messages/elements that use this type for details. */
class RouteType : public virtual uci::type::RouteType {
public:
  /** A series of path segments. A route can contain many paths. Some paths provide alternate routes and contingency routes
    * which branch from the primary path. Other paths can be standalone, disconnected paths. Elements given here are not
    * necessarily in mission/flight order; it is necessary to follow the linkages provided in NextPathSegment and/or
    * ConditionalPathSegment to traverse the segments in mission/flight order. [Occurrences: Minimum: 1; Maximum:
    * MAX_LENGTH]
    */
  using Path = asb_uci::base::BoundedList<uci::type::RoutePathType, uci::type::accessorType::routePathType, asb_uci::type::RoutePathType>;

  /** The constructor */
  RouteType();

  /** The copy constructor
    *
    * @param rhs The RouteType to copy from
    */
  RouteType(const RouteType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The RouteType to move from
    */
  RouteType(RouteType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The RouteType to copy from
    * @return The RouteType that was assigned
    */
  RouteType& operator=(const RouteType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The RouteType to move from
    * @return The RouteType that was assigned
    */
  RouteType& operator=(RouteType&& rhs) = delete;

  /** The destructor */
  virtual ~RouteType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RouteType whose contents are to be used to set this uci::type::RouteType's contents.
    */
  void copy(const uci::type::RouteType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RouteType whose contents are to be used to set this uci::type::RouteType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::RouteType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's Detailed field
    *
    * @return The contents of the Detailed field
    */
  xs::Boolean getDetailed() const override;

  /** Sets the contents of the message's Detailed field
    *
    * @param value The new value to set the Detailed field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::RouteType& setDetailed(xs::Boolean value) override;

  /** Returns the accessor to the FirstInRoutePathID field contained in this message fragment
    *
    * @return The const reference to the accessor to the FirstInRoutePathID field.
    */
  const uci::type::PathID_Type& getFirstInRoutePathID() const override;

  /** Returns the accessor to the FirstInRoutePathID field contained in this message fragment
    *
    * @return The reference to the accessor to the FirstInRoutePathID field.
    */
  uci::type::PathID_Type& getFirstInRoutePathID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RouteType& setFirstInRoutePathID(const uci::type::PathID_Type& accessor) override;

  /** Returns the contents of the message's RouteProjection field
    *
    * @return The contents of the RouteProjection field
    */
  const uci::type::LineProjectionEnum& getRouteProjection() const override;

  /** Returns the contents of the message's RouteProjection field
    *
    * @return The contents of the RouteProjection field
    */
  uci::type::LineProjectionEnum& getRouteProjection() override;

  /** Sets the contents of the message's RouteProjection field
    *
    * @param accessor The accessor to use to set the RouteProjection field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::RouteType& setRouteProjection(const uci::type::LineProjectionEnum& accessor) override;

  /** Sets the contents of the message's RouteProjection field
    *
    * @param value The new value to set the RouteProjection field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::RouteType& setRouteProjection(uci::type::LineProjectionEnum::EnumerationItem value) override;

  /** Returns the accessor to the Path field contained in this message fragment
    *
    * @return The const reference to the accessor to the Path field.
    */
  const uci::type::RouteType::Path& getPath() const override;

  /** Returns the accessor to the Path field contained in this message fragment
    *
    * @return The reference to the accessor to the Path field.
    */
  uci::type::RouteType::Path& getPath() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RouteType& setPath(const uci::type::RouteType::Path& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RemarksType& getRemarks_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::RemarksType& getRemarks() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RemarksType& getRemarks() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RouteType& setRemarks(const uci::type::RemarksType& accessor) override;

  /** Returns whether this optional field Remarksis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasRemarks() const noexcept override;

  /** Enables the optional field such that getRemarks will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RemarksType& enableRemarks(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RouteType& clearRemarks() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<RouteType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::RouteType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::RouteType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  asb_xs::Boolean detailed_Accessor{false};
  std::unique_ptr<PathID_Type> firstInRoutePathID_Accessor;
  std::unique_ptr<LineProjectionEnum> routeProjection_Accessor;
  std::unique_ptr<Path> path_Accessor;
  std::unique_ptr<RemarksType> remarks_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_ROUTETYPE_H
