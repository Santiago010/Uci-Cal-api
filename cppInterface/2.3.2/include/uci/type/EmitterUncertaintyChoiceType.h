/** @file EmitterUncertaintyChoiceType.h
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

#ifndef UCI_TYPE_EMITTERUNCERTAINTYCHOICETYPE_H
#define UCI_TYPE_EMITTERUNCERTAINTYCHOICETYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "EllipseType.h"
#include "RectangleType.h"

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

/** An ellipse or rectangle shape describing 1-sigma position uncertainty. */
class EmitterUncertaintyChoiceType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new EmitterUncertaintyChoiceType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EmitterUncertaintyChoiceType.
    */
  static UCI_EXPORT EmitterUncertaintyChoiceType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new EmitterUncertaintyChoiceType initializing the data accessed by the new
    * EmitterUncertaintyChoiceType using the data accessed by the specified EmitterUncertaintyChoiceType (cloning).
    *
    * @param accessor The EmitterUncertaintyChoiceType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created EmitterUncertaintyChoiceType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EmitterUncertaintyChoiceType.
    */
  static UCI_EXPORT EmitterUncertaintyChoiceType& create(const EmitterUncertaintyChoiceType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified EmitterUncertaintyChoiceType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The EmitterUncertaintyChoiceType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(EmitterUncertaintyChoiceType& accessor);

  /** Returns this accessor's type constant, i.e. emitterUncertaintyChoiceType.
    *
    * @return This accessor's type constant, i.e. emitterUncertaintyChoiceType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::emitterUncertaintyChoiceType;
  }

  /** Returns the version that was initialized from the uci:version attribute of EmitterUncertaintyChoiceType.
    *
    * @return The version that was initialized from the uci:version attribute of EmitterUncertaintyChoiceType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const EmitterUncertaintyChoiceType& accessor) = 0;

  /** The following enumeration is used to identify which element of this Choice has been chosen. */
  enum EmitterUncertaintyChoiceTypeChoice {
    EMITTERUNCERTAINTYCHOICETYPE_CHOICE_NONE,
    EMITTERUNCERTAINTYCHOICETYPE_CHOICE_UNCERTAINTYELLIPSE,
    EMITTERUNCERTAINTYCHOICETYPE_CHOICE_UNCERTAINTYRECTANGLE
  };

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value.
    */
  virtual EmitterUncertaintyChoiceTypeChoice getEmitterUncertaintyChoiceTypeChoiceOrdinal() const = 0;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getEmitterUncertaintyChoiceTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In
    * addition, the access methods associated with the chosen element will be enabled and will provide access to the chosen
    * element.
    *
    * @param chosenElementOrdinal The ordinal to set this choice's selected ordinal to.
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EmitterUncertaintyChoiceType& setEmitterUncertaintyChoiceTypeChoiceOrdinal(EmitterUncertaintyChoiceTypeChoice chosenElementOrdinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * UncertaintyEllipse.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      UncertaintyEllipse.
    */
  virtual const uci::type::EllipseType& getUncertaintyEllipse() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by UncertaintyEllipse.
    *
    * @return A reference to the accessor that provides access to the complex content identified by UncertaintyEllipse.
    */
  virtual uci::type::EllipseType& getUncertaintyEllipse() = 0;

  /** Sets the complex content identified by UncertaintyEllipse to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by UncertaintyEllipse.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EmitterUncertaintyChoiceType& setUncertaintyEllipse(const uci::type::EllipseType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by UncertaintyEllipse.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by UncertaintyEllipse, false
    *      otherwise.
    */
  virtual bool isUncertaintyEllipse() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by UncertaintyEllipse.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by UncertaintyEllipse.
    */
  virtual uci::type::EllipseType& chooseUncertaintyEllipse(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * UncertaintyRectangle.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      UncertaintyRectangle.
    */
  virtual const uci::type::RectangleType& getUncertaintyRectangle() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by UncertaintyRectangle.
    *
    * @return A reference to the accessor that provides access to the complex content identified by UncertaintyRectangle.
    */
  virtual uci::type::RectangleType& getUncertaintyRectangle() = 0;

  /** Sets the complex content identified by UncertaintyRectangle to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by UncertaintyRectangle.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EmitterUncertaintyChoiceType& setUncertaintyRectangle(const uci::type::RectangleType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by UncertaintyRectangle.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by UncertaintyRectangle, false
    *      otherwise.
    */
  virtual bool isUncertaintyRectangle() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by UncertaintyRectangle.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by UncertaintyRectangle.
    */
  virtual uci::type::RectangleType& chooseUncertaintyRectangle(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  EmitterUncertaintyChoiceType() {
  }

  /** The destructor [only available to derived classes]. */
  ~EmitterUncertaintyChoiceType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The EmitterUncertaintyChoiceType to copy from.
    */
  EmitterUncertaintyChoiceType(const EmitterUncertaintyChoiceType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this EmitterUncertaintyChoiceType to the contents of the
    * EmitterUncertaintyChoiceType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The EmitterUncertaintyChoiceType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this EmitterUncertaintyChoiceType.
    * @return A reference to this EmitterUncertaintyChoiceType.
    */
  EmitterUncertaintyChoiceType& operator=(const EmitterUncertaintyChoiceType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_EMITTERUNCERTAINTYCHOICETYPE_H

