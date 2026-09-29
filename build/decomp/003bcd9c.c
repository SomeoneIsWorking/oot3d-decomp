// OoT3D decomp @ 003bcd9c  name=FUN_003bcd9c  size=184

void FUN_003bcd9c(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  fVar3 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x1e4));
  fVar3 = fVar3 * DAT_003bce54;
  fVar4 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x1e6));
  uVar5 = DAT_003bce5c;
  *(float *)(param_1 + 0x1f0) = fVar3 + fVar4 * DAT_003bce58;
  uVar1 = *(ushort *)(param_1 + 0x1c) & 0xf0;
  uVar6 = DAT_003bce60;
  if ((((*(ushort *)(param_1 + 0x1c) & 0xf0) != 0) && (uVar6 = DAT_003bce64, uVar1 != 0x10)) &&
     (uVar6 = uVar5, uVar1 == 0x20)) {
    uVar6 = DAT_003bce68;
  }
  iVar2 = FUN_00317614(param_1);
  if (iVar2 != 0) {
    uVar5 = DAT_003bce6c;
  }
  FUN_003705a0(uVar5,uVar6,param_1 + 0x1ec);
  *(float *)(param_1 + 0x2c) =
       *(float *)(param_1 + 0x1ec) + *(float *)(param_1 + 0x1f0) + *(float *)(param_1 + 0xc);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x16);
  FUN_00317218(param_1,param_2);
  return;
}
