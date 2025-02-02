/** @file ImageSubheaderType.h
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

#ifndef UCI_TYPE_IMAGESUBHEADERTYPE_H
#define UCI_TYPE_IMAGESUBHEADERTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "AlphanumericDashSpaceUnderscoreString11OnlyType.h"
#include "AlphanumericDashSpaceUnderscoreString17OnlyType.h"
#include "AlphanumericDashSpaceUnderscoreString21OnlyType.h"
#include "AlphanumericDashSpaceUnderscoreString3OnlyType.h"
#include "AlphanumericDashSpaceUnderscoreString9OnlyType.h"

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
class ImageSubheaderType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new ImageSubheaderType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ImageSubheaderType.
    */
  static UCI_EXPORT ImageSubheaderType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ImageSubheaderType initializing the data accessed by the new ImageSubheaderType using
    * the data accessed by the specified ImageSubheaderType (cloning).
    *
    * @param accessor The ImageSubheaderType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created ImageSubheaderType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ImageSubheaderType.
    */
  static UCI_EXPORT ImageSubheaderType& create(const ImageSubheaderType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ImageSubheaderType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The ImageSubheaderType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ImageSubheaderType& accessor);

  /** Returns this accessor's type constant, i.e. imageSubheaderType.
    *
    * @return This accessor's type constant, i.e. imageSubheaderType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::imageSubheaderType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ImageSubheaderType.
    *
    * @return The version that was initialized from the uci:version attribute of ImageSubheaderType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ImageSubheaderType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by ImageSource.
    *
    * @return A const reference to the accessor that provides access to the string identified by ImageSource.
    */
  virtual const uci::type::AlphanumericDashSpaceUnderscoreString17OnlyType& getImageSource() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by ImageSource.
    *
    * @return A reference to the accessor that provides access to the string identified by ImageSource.
    */
  virtual uci::type::AlphanumericDashSpaceUnderscoreString17OnlyType& getImageSource() = 0;

  /** Sets the string identified by ImageSource to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by ImageSource.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& setImageSource(const uci::type::AlphanumericDashSpaceUnderscoreString17OnlyType& value) = 0;

  /** Sets the string identified by ImageSource to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& setImageSource(const std::string& value) = 0;

  /** Sets the string identified by ImageSource to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& setImageSource(const char* value) = 0;

  /** Returns whether the Element identified by ImageSource exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ImageSource is enabled or not.
    */
  virtual bool hasImageSource() const = 0;

  /** Enables the Element identified by ImageSource.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by ImageSource.
    */
  virtual uci::type::AlphanumericDashSpaceUnderscoreString17OnlyType& enableImageSource(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ImageSource.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& clearImageSource() = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by PrimaryTargetIdentifier.
    *
    * @return A const reference to the accessor that provides access to the string identified by PrimaryTargetIdentifier.
    */
  virtual const uci::type::AlphanumericDashSpaceUnderscoreString3OnlyType& getPrimaryTargetIdentifier() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by PrimaryTargetIdentifier.
    *
    * @return A reference to the accessor that provides access to the string identified by PrimaryTargetIdentifier.
    */
  virtual uci::type::AlphanumericDashSpaceUnderscoreString3OnlyType& getPrimaryTargetIdentifier() = 0;

  /** Sets the string identified by PrimaryTargetIdentifier to the contents of the string accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by PrimaryTargetIdentifier.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& setPrimaryTargetIdentifier(const uci::type::AlphanumericDashSpaceUnderscoreString3OnlyType& value) = 0;

  /** Sets the string identified by PrimaryTargetIdentifier to the contents of the string that is accessed by the specified
    * accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& setPrimaryTargetIdentifier(const std::string& value) = 0;

  /** Sets the string identified by PrimaryTargetIdentifier to the contents of the string that is accessed by the specified
    * accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& setPrimaryTargetIdentifier(const char* value) = 0;

  /** Returns whether the Element identified by PrimaryTargetIdentifier exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PrimaryTargetIdentifier is enabled or not.
    */
  virtual bool hasPrimaryTargetIdentifier() const = 0;

  /** Enables the Element identified by PrimaryTargetIdentifier.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by PrimaryTargetIdentifier.
    */
  virtual uci::type::AlphanumericDashSpaceUnderscoreString3OnlyType& enablePrimaryTargetIdentifier(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by PrimaryTargetIdentifier.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& clearPrimaryTargetIdentifier() = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by ImageIdentifier1.
    *
    * @return A const reference to the accessor that provides access to the string identified by ImageIdentifier1.
    */
  virtual const uci::type::AlphanumericDashSpaceUnderscoreString11OnlyType& getImageIdentifier1() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by ImageIdentifier1.
    *
    * @return A reference to the accessor that provides access to the string identified by ImageIdentifier1.
    */
  virtual uci::type::AlphanumericDashSpaceUnderscoreString11OnlyType& getImageIdentifier1() = 0;

  /** Sets the string identified by ImageIdentifier1 to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by ImageIdentifier1.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& setImageIdentifier1(const uci::type::AlphanumericDashSpaceUnderscoreString11OnlyType& value) = 0;

  /** Sets the string identified by ImageIdentifier1 to the contents of the string that is accessed by the specified
    * accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& setImageIdentifier1(const std::string& value) = 0;

  /** Sets the string identified by ImageIdentifier1 to the contents of the string that is accessed by the specified
    * accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& setImageIdentifier1(const char* value) = 0;

  /** Returns whether the Element identified by ImageIdentifier1 exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ImageIdentifier1 is enabled or not.
    */
  virtual bool hasImageIdentifier1() const = 0;

  /** Enables the Element identified by ImageIdentifier1.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by ImageIdentifier1.
    */
  virtual uci::type::AlphanumericDashSpaceUnderscoreString11OnlyType& enableImageIdentifier1(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ImageIdentifier1.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& clearImageIdentifier1() = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by ImageIdentifier2.
    *
    * @return A const reference to the accessor that provides access to the string identified by ImageIdentifier2.
    */
  virtual const uci::type::AlphanumericDashSpaceUnderscoreString9OnlyType& getImageIdentifier2() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by ImageIdentifier2.
    *
    * @return A reference to the accessor that provides access to the string identified by ImageIdentifier2.
    */
  virtual uci::type::AlphanumericDashSpaceUnderscoreString9OnlyType& getImageIdentifier2() = 0;

  /** Sets the string identified by ImageIdentifier2 to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by ImageIdentifier2.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& setImageIdentifier2(const uci::type::AlphanumericDashSpaceUnderscoreString9OnlyType& value) = 0;

  /** Sets the string identified by ImageIdentifier2 to the contents of the string that is accessed by the specified
    * accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& setImageIdentifier2(const std::string& value) = 0;

  /** Sets the string identified by ImageIdentifier2 to the contents of the string that is accessed by the specified
    * accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& setImageIdentifier2(const char* value) = 0;

  /** Returns whether the Element identified by ImageIdentifier2 exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ImageIdentifier2 is enabled or not.
    */
  virtual bool hasImageIdentifier2() const = 0;

  /** Enables the Element identified by ImageIdentifier2.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by ImageIdentifier2.
    */
  virtual uci::type::AlphanumericDashSpaceUnderscoreString9OnlyType& enableImageIdentifier2(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ImageIdentifier2.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& clearImageIdentifier2() = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by ICOM_N.
    *
    * @return A const reference to the accessor that provides access to the string identified by ICOM_N.
    */
  virtual const uci::type::AlphanumericDashSpaceUnderscoreString21OnlyType& getICOM_N() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by ICOM_N.
    *
    * @return A reference to the accessor that provides access to the string identified by ICOM_N.
    */
  virtual uci::type::AlphanumericDashSpaceUnderscoreString21OnlyType& getICOM_N() = 0;

  /** Sets the string identified by ICOM_N to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by ICOM_N.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& setICOM_N(const uci::type::AlphanumericDashSpaceUnderscoreString21OnlyType& value) = 0;

  /** Sets the string identified by ICOM_N to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& setICOM_N(const std::string& value) = 0;

  /** Sets the string identified by ICOM_N to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& setICOM_N(const char* value) = 0;

  /** Returns whether the Element identified by ICOM_N exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ICOM_N is enabled or not.
    */
  virtual bool hasICOM_N() const = 0;

  /** Enables the Element identified by ICOM_N.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by ICOM_N.
    */
  virtual uci::type::AlphanumericDashSpaceUnderscoreString21OnlyType& enableICOM_N(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ICOM_N.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ImageSubheaderType& clearICOM_N() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ImageSubheaderType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ImageSubheaderType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ImageSubheaderType to copy from.
    */
  ImageSubheaderType(const ImageSubheaderType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ImageSubheaderType to the contents of the ImageSubheaderType on
    * the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The ImageSubheaderType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this ImageSubheaderType.
    * @return A reference to this ImageSubheaderType.
    */
  ImageSubheaderType& operator=(const ImageSubheaderType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_IMAGESUBHEADERTYPE_H

