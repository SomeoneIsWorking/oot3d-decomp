// OoT3D decomp @ 003b35c8  name=FUN_003b35c8  size=196

void FUN_003b35c8(int param_1,undefined4 param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;

  fVar4 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x1e4));
  fVar4 = fVar4 * DAT_003b368c;
  fVar5 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x1e6));
  uVar6 = DAT_003b3694;
  *(float *)(param_1 + 0x1f0) = fVar4 + fVar5 * DAT_003b3690;
  uVar1 = *(ushort *)(param_1 + 0x1c) & 0xf0;
  uVar7 = DAT_003b3698;
  if ((((*(ushort *)(param_1 + 0x1c) & 0xf0) != 0) && (uVar7 = DAT_003b369c, uVar1 != 0x10)) &&
     (uVar7 = uVar6, uVar1 == 0x20)) {
    uVar7 = DAT_003b36a0;
  }
  iVar3 = FUN_00317614(param_1);
  if (iVar3 != 0) {
    uVar6 = DAT_003b36a4;
  }
  FUN_003705a0(uVar6,uVar7,param_1 + 0x1ec);
  *(float *)(param_1 + 0x2c) =
       *(float *)(param_1 + 0x1ec) + *(float *)(param_1 + 0x1f0) + *(float *)(param_1 + 0xc);
  sVar2 = *(short *)(param_1 + 0x36) + 0x10b;
  *(short *)(param_1 + 0x36) = sVar2;
  *(short *)(param_1 + 0xbe) = sVar2;
  FUN_00317218(param_1,param_2);
  return;
}
