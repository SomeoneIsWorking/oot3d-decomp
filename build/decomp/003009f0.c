// OoT3D decomp @ 003009f0  name=FUN_003009f0  size=168

undefined4 FUN_003009f0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;

  if (((*DAT_00300a98 & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_00300a98), puVar3 = DAT_00300aa4, uVar2 = DAT_00300aa0,
     uVar1 = DAT_00300a9c, iVar4 != 0)) {
    *DAT_00300aa4 = DAT_00300a9c;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
    puVar3[3] = uVar2;
    puVar3[4] = uVar2;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    puVar3[7] = uVar2;
    puVar3[8] = uVar2;
    puVar3[9] = uVar2;
    puVar3[10] = uVar1;
    puVar3[0xb] = uVar2;
  }
  FUN_00372224(param_1,DAT_00300aa4);
  return param_1;
}
