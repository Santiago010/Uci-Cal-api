/** @file PathType.h
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

#ifndef UCI_TYPE_PATHTYPE_H
#define UCI_TYPE_PATHTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "LineProjectionEnum.h"
#include "Point2D_Type.h"

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

/** See annotations in child elements and messages/elements that use this type for details. */
class PathType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PathType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PathType.
    */
  static UCI_EXPORT PathType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PathType initializing the data accessed by the new PathType using the data accessed by
    * the specified PathType (cloning).
    *
    * @param accessor The PathType that provides access to the data that is to be used to initialize the data accessed by
    *      the new created PathType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PathType.
    */
  static UCI_EXPORT PathType& create(const PathType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PathType. Use of the specified accessor after it has been destroyed will result in
    * undefined behavior.
    *
    * @param accessor The PathType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PathType& accessor);

  /** Returns this accessor's type constant, i.e. pathType.
    *
    * @return This accessor's type constant, i.e. pathType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::pathType;
  }

  /** Returns the version that was initialized from the uci:version attribute of PathType.
    *
    * @return The version that was initialized from the uci:version attribute of PathType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PathType& accessor) = 0;

  /** Indicates a vertex or waypoint along the desired path. Generally, services are encouraged to provide altitude and/or
    * time data whenever it is known. [Occurrences: Minimum: 2; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::Point2D_Type, uci::type::accessorType::point2D_Type> SegmentVertex;

  /** Returns a const reference to the bounded list identified by SegmentVertex.
    *
    * @return A const reference to the bounded list identified by SegmentVertex.
    */
  virtual const uci::type::PathType::SegmentVertex& getSegmentVertex() const = 0;

  /** Returns a reference to the bounded list identified by SegmentVertex.
    *
    * @return A reference to the bounded list identified by SegmentVertex.
    */
  virtual uci::type::PathType::SegmentVertex& getSegmentVertex() = 0;

  /** Sets the bounded list identified by SegmentVertex.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathType& setSegmentVertex(const uci::type::PathType::SegmentVertex& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by LineProjection.
    *
    * @return A const reference to the value of the enumeration identified by LineProjection.
    */
  virtual const uci::type::LineProjectionEnum& getLineProjection() const = 0;

  /** Returns a reference to the value of the enumeration identified by LineProjection.
    *
    * @return A reference to the value of the enumeration identified by LineProjection.
    */
  virtual uci::type::LineProjectionEnum& getLineProjection() = 0;

  /** Sets the value of the enumeration identified by LineProjection.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathType& setLineProjection(const uci::type::LineProjectionEnum& value) = 0;

  /** Sets the value of the enumeration identified by LineProjection.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PathType& setLineProjection(uci::type::LineProjectionEnum::EnumerationItem value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PathType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PathType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PathType to copy from.
    */
  PathType(const PathType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PathType to the contents of the PathType on the right hand side
    * (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The PathType on the right hand side (rhs) of the assignment operator whose contents are used to set the
    *      contents of this PathType.
    * @return A reference to this PathType.
    */
  PathType& operator=(const PathType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PATHTYPE_H

