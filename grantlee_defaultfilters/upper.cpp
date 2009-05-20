
#include "upper.h"

UpperFilter::UpperFilter(QObject* parent): Filter(parent)
{

}

QString UpperFilter::doFilter(const QVariant& input, const QString &argument) const
{
  return input.toString().toUpper();
}

#include "upper.moc"