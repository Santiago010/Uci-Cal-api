/** @file Point2D_ReferenceType.h
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

#ifndef UCI_TYPE_POINT2D_REFERENCETYPE_H
#define UCI_TYPE_POINT2D_REFERENCETYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "PointChoiceType.h"
#include "ReferenceObjectType.h"

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
class Point2D_ReferenceType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new Point2D_ReferenceType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed Point2D_ReferenceType.
    */
  static UCI_EXPORT Point2D_ReferenceType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new Point2D_ReferenceType initializing the data accessed by the new Point2D_ReferenceType
    * using the data accessed by the specified Point2D_ReferenceType (cloning).
    *
    * @param accessor The Point2D_ReferenceType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created Point2D_ReferenceType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed Point2D_ReferenceType.
    */
  static UCI_EXPORT Point2D_ReferenceType& create(const Point2D_ReferenceType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified Point2D_ReferenceType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The Point2D_ReferenceType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(Point2D_ReferenceType& accessor);

  /** Returns this accessor's type constant, i.e. point2D_ReferenceType.
    *
    * @return This accessor's type constant, i.e. point2D_ReferenceType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::point2D_ReferenceType;
  }

  /** Returns the version that was initialized from the uci:version attribute of Point2D_ReferenceType.
    *
    * @return The version that was initialized from the uci:version attribute of Point2D_ReferenceType.
    */
  static std::string getUCITypeVersion() {
    return "002.000.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const Point2D_ReferenceType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by PointChoice.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by PointChoice.
    */
  virtual const uci::type::PointChoiceType& getPointChoice() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by PointChoice.
    *
    * @return A reference to the accessor that provides access to the complex content identified by PointChoice.
    */
  virtual uci::type::PointChoiceType& getPointChoice() = 0;

  /** Sets the complex content identified by PointChoice to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by PointChoice.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Point2D_ReferenceType& setPointChoice(const uci::type::PointChoiceType& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ReferenceObject.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ReferenceObject.
    */
  virtual const uci::type::ReferenceObjectType& getReferenceObject() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ReferenceObject.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ReferenceObject.
    */
  virtual uci::type::ReferenceObjectType& getReferenceObject() = 0;

  /** Sets the complex content identified by ReferenceObject to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ReferenceObject.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Point2D_ReferenceType& setReferenceObject(const uci::type::ReferenceObjectType& value) = 0;

  /** Returns whether the Element identified by ReferenceObject exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ReferenceObject is enabled or not.
    */
  virtual bool hasReferenceObject() const = 0;

  /** Enables the Element identified by ReferenceObject.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ReferenceObject.
    */
  virtual uci::type::ReferenceObjectType& enableReferenceObject(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ReferenceObject.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Point2D_ReferenceType& clearReferenceObject() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  Point2D_ReferenceType() {
  }

  /** The destructor [only available to derived classes]. */
  ~Point2D_ReferenceType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The Point2D_ReferenceType to copy from.
    */
  Point2D_ReferenceType(const Point2D_ReferenceType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this Point2D_ReferenceType to the contents of the Point2D_ReferenceType
    * on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The Point2D_ReferenceType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this Point2D_ReferenceType.
    * @return A reference to this Point2D_ReferenceType.
    */
  Point2D_ReferenceType& operator=(const Point2D_ReferenceType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_POINT2D_REFERENCETYPE_H

