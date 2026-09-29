// OoT3D decomp @ 0025f7b0  name=FUN_0025f7b0  size=660

void FUN_0025f7b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;

  uVar3 = DAT_0025fa58;
  iVar7 = *(int *)(*(int *)(param_2 + 0xa98) + 0x28);
  *(uint *)(param_1 + 0x1a8) = *(ushort *)(param_1 + 0x1c) & 0xff;
  *(uint *)(param_1 + 0x1b4) = ((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18;
  FUN_003510b0(param_1,uVar3,param_3,param_4,param_4);
  uVar3 = FUN_00372f38(param_1,param_2,param_1 + 0x1b8,0xb,0);
  uVar3 = FUN_00372f0c(uVar3,1);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1b8) + 0xc),uVar3);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1b8) + 0xc) + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x2c);
  switch(*(undefined4 *)(param_1 + 0x1a8)) {
  case 0:
    iVar5 = FUN_0036e864(param_2,0x1c);
    if (iVar5 == 0) {
      iVar5 = FUN_0036e864(param_2,0x1d);
      if (iVar5 == 0) {
        iVar4 = FUN_0036e864(param_2,0x1e);
        iVar5 = 0;
        if (iVar4 != 0) {
          iVar5 = 1;
        }
      }
      else {
        iVar5 = 2;
      }
    }
    else {
      iVar5 = 3;
    }
    iVar4 = DAT_0025fa60;
    puVar6 = (undefined4 *)(DAT_0025fa5c + iVar5 * 8);
    fVar8 = (float)VectorSignedToFloat(puVar6[1],(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar8 + *(float *)(param_1 + 0x1b0);
    *(float *)(param_1 + 0x2c) = fVar8;
    uVar2 = (undefined2)(int)fVar8;
    iVar5 = 0;
    do {
      *(undefined2 *)(iVar7 + *(int *)(iVar4 + iVar5 * 4) * 0x10 + 2) = uVar2;
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 2;
      *(undefined2 *)(iVar7 + *(int *)(iVar4 + iVar1 + 4) * 0x10 + 2) = uVar2;
    } while (iVar5 < 8);
    *(short *)(param_1 + 0x1c) = (short)*puVar6;
    FUN_0036beac(param_2,0x1c);
    FUN_0036beac(param_2,0x1d);
    FUN_0036beac(param_2,0x1e);
    if (*(short *)(param_1 + 0x1c) == 0x1d) {
      FUN_00375c10(param_2,0x1d);
    }
    else if (*(short *)(param_1 + 0x1c) == 0x1e) {
      FUN_00375c10(param_2,0x1e);
    }
    else {
      FUN_00375c10(param_2,0x1c);
    }
    *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x2c);
    break;
  case 2:
    iVar5 = FUN_0036e864(param_2,*(undefined4 *)(param_1 + 0x1b4));
    if (iVar5 != 0) {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x1b0) + DAT_0025fa64;
    }
    *(short *)(iVar7 + 0x62) = (short)(int)*(float *)(param_1 + 0x2c);
    break;
  case 3:
    iVar5 = FUN_0036e864(param_2,*(undefined4 *)(param_1 + 0x1b4));
    if (iVar5 != 0) {
      fVar8 = *(float *)(param_1 + 0x1b0) + DAT_0025fa68;
      *(float *)(param_1 + 0x2c) = fVar8;
      *(float *)(param_1 + 0x1ac) = fVar8;
    }
    *(short *)(iVar7 + 0x82) = (short)(int)*(float *)(param_1 + 0x2c);
    break;
  case 4:
    iVar5 = FUN_0036e864(param_2,*(undefined4 *)(param_1 + 0x1b4));
    if (iVar5 != 0) {
      fVar8 = *(float *)(param_1 + 0x1b0) + DAT_0025fa6c;
      *(float *)(param_1 + 0x2c) = fVar8;
      *(float *)(param_1 + 0x1ac) = fVar8;
    }
    *(short *)(DAT_0025fa70 + iVar7) = (short)(int)*(float *)(param_1 + 0x2c);
  }
  *(undefined4 *)(param_1 + 0x1a4) = DAT_0025fa74;
  return;
}
