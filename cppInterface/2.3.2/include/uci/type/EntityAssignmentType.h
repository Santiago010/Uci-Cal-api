/** @file EntityAssignmentType.h
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

#ifndef UCI_TYPE_ENTITYASSIGNMENTTYPE_H
#define UCI_TYPE_ENTITYASSIGNMENTTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "EntityAssignmentMemberType.h"
#include "Link16_NPG_Type.h"

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

/** The assignment group is a collection of one or more entities assigned to their respective index number. */
class EntityAssignmentType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new EntityAssignmentType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntityAssignmentType.
    */
  static UCI_EXPORT EntityAssignmentType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new EntityAssignmentType initializing the data accessed by the new EntityAssignmentType
    * using the data accessed by the specified EntityAssignmentType (cloning).
    *
    * @param accessor The EntityAssignmentType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created EntityAssignmentType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntityAssignmentType.
    */
  static UCI_EXPORT EntityAssignmentType& create(const EntityAssignmentType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified EntityAssignmentType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The EntityAssignmentType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(EntityAssignmentType& accessor);

  /** Returns this accessor's type constant, i.e. entityAssignmentType.
    *
    * @return This accessor's type constant, i.e. entityAssignmentType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::entityAssignmentType;
  }

  /** Returns the version that was initialized from the uci:version attribute of EntityAssignmentType.
    *
    * @return The version that was initialized from the uci:version attribute of EntityAssignmentType.
    */
  static std::string getUCITypeVersion() {
    return "001.001.000.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const EntityAssignmentType& accessor) = 0;

  /** This is the collection of members that belong to the assignment group. Size is based on allowed number of unique zero
    * based index values for TrackIndex. [Occurrences: Minimum: 0; Maximum: 64]
    */
  typedef uci::base::BoundedList<uci::type::EntityAssignmentMemberType, uci::type::accessorType::entityAssignmentMemberType> EntityIDMapping;

  /** Returns the value of the SimplePrimitive data type identified by Link16NPG.
    *
    * @return The value of the simple primitive data type identified by Link16NPG.
    */
  virtual uci::type::Link16_NPG_TypeValue getLink16NPG() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Link16NPG.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityAssignmentType& setLink16NPG(uci::type::Link16_NPG_TypeValue value) = 0;

  /** Returns whether the Element identified by Link16NPG exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Link16NPG is enabled or not.
    */
  virtual bool hasLink16NPG() const = 0;

  /** Clears (disabled) the Element identified by Link16NPG.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityAssignmentType& clearLink16NPG() = 0;

  /** Returns a const reference to the bounded list identified by EntityIDMapping.
    *
    * @return A const reference to the bounded list identified by EntityIDMapping.
    */
  virtual const uci::type::EntityAssignmentType::EntityIDMapping& getEntityIDMapping() const = 0;

  /** Returns a reference to the bounded list identified by EntityIDMapping.
    *
    * @return A reference to the bounded list identified by EntityIDMapping.
    */
  virtual uci::type::EntityAssignmentType::EntityIDMapping& getEntityIDMapping() = 0;

  /** Sets the bounded list identified by EntityIDMapping.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityAssignmentType& setEntityIDMapping(const uci::type::EntityAssignmentType::EntityIDMapping& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  EntityAssignmentType() {
  }

  /** The destructor [only available to derived classes]. */
  ~EntityAssignmentType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The EntityAssignmentType to copy from.
    */
  EntityAssignmentType(const EntityAssignmentType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this EntityAssignmentType to the contents of the EntityAssignmentType
    * on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The EntityAssignmentType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this EntityAssignmentType.
    * @return A reference to this EntityAssignmentType.
    */
  EntityAssignmentType& operator=(const EntityAssignmentType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ENTITYASSIGNMENTTYPE_H

