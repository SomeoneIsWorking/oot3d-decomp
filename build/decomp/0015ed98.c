// OoT3D decomp @ 0015ed98  name=FUN_0015ed98  size=148

void FUN_0015ed98(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;

  if (((*(uint *)(DAT_0015ee2c + 4) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_0015ee30), puVar3 = DAT_0015ee3c, uVar2 = DAT_0015ee38,
     uVar1 = DAT_0015ee34, iVar4 != 0)) {
    *DAT_0015ee3c = DAT_0015ee34;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
  }
  if (0x18 < *(short *)(param_1 + 0x218)) {
    FUN_0036a154(param_2,param_1 + 0x28,DAT_0015ee3c);
    FUN_00375c44(param_2,param_1 + 0x28,0x50,DAT_0015ee40);
    FUN_00374428(param_1);
    return;
  }
  return;
}
