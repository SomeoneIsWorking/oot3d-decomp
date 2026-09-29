// OoT3D decomp @ 00310148  name=FUN_00310148  size=144

undefined8 FUN_00310148(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;

  puVar2 = DAT_003101d8;
  if (*param_1 == -1) {
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = 0;
    uVar3 = *puVar2;
  }
  else {
    if (*param_1 != -2) {
      return CONCAT44(DAT_003101d8,param_1);
    }
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = 1;
    uVar3 = *puVar2;
  }
  software_interrupt(0x22);
  return CONCAT44(param_1,uVar3);
}
