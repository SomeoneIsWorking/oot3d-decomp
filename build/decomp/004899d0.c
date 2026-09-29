// OoT3D decomp @ 004899d0  name=FUN_004899d0  size=204

void FUN_004899d0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;

  iVar1 = DAT_00489a9c;
  if (*(char *)(DAT_00489a9c + 2) != '\0') {
    uVar2 = FUN_002c341c(DAT_00489aa4,param_2,(int)((ulonglong)DAT_00489aa0 * 1000),
                         (int)((ulonglong)DAT_00489aa0 * 1000 >> 0x20));
    if ((int)uVar2 != 0) goto code_r0x00489a10;
    *(undefined1 *)(iVar1 + 1) = 1;
  }
  if (*(char *)(iVar1 + 1) != '\0') {
    FUN_0030b304(DAT_00489aa8);
    FUN_0031007c(DAT_00489aa8);
  }
  if (*(char *)(iVar1 + 3) != '\0') {
    FUN_0030e604((int)((ulonglong)DAT_00489aac * 1000),(int)((ulonglong)DAT_00489aac * 1000 >> 0x20)
                );
    return;
  }
  uVar2 = FUN_002e1ba0(DAT_00489aa4);
code_r0x00489a10:
  software_interrupt(0x28);
  uVar3 = FUN_002c330c(DAT_00489aa4);
  software_interrupt(0x28);
  *param_1 = (uint)uVar3 - (uint)uVar2;
  param_1[1] = (int)((ulonglong)uVar3 >> 0x20) -
               ((int)((ulonglong)uVar2 >> 0x20) + (uint)((uint)uVar3 < (uint)uVar2));
  return;
}
