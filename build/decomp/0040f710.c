// OoT3D decomp @ 0040f710  name=FUN_0040f710  size=52

undefined4 FUN_0040f710(int *param_1)

{
  char cVar1;
  undefined4 uVar2;

  cVar1 = *(char *)(*param_1 + 2);
  uVar2 = DAT_0040f744;
  if ((cVar1 != '\x01') && (uVar2 = DAT_0040f748, cVar1 != '\x02')) {
    uVar2 = DAT_0040f744;
    if (cVar1 != '\x03' && cVar1 != '\x04') {
      uVar2 = 0;
    }
    return uVar2;
  }
  return uVar2;
}
