// OoT3D decomp @ 0030e604  name=FUN_0030e604  size=140

undefined8 FUN_0030e604(uint param_1,uint param_2)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;

  if ((int)param_2 < (int)(uint)(param_1 < DAT_0030e678)) {
    lVar2 = (ulonglong)DAT_0030e67c * (ulonglong)param_2 +
            CONCAT44(((int)param_2 >> 0x1f) * DAT_0030e67c,
                     (int)((ulonglong)DAT_0030e67c * (ulonglong)param_1 >> 0x20));
    iVar4 = (int)lVar2;
    do {
      iVar3 = iVar4 + -2;
      bVar1 = 1 < iVar4;
      iVar4 = iVar3;
    } while (iVar3 != 0 && bVar1);
    return CONCAT44((int)((ulonglong)lVar2 >> 0x20),iVar3);
  }
  software_interrupt(10);
  return CONCAT44(param_2,param_1);
}
