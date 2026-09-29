// OoT3D decomp @ 003dfe64  name=FUN_003dfe64  size=120

void FUN_003dfe64(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;

  uVar4 = uRam003e0120;
  uVar3 = uRam003e011c;
  iVar8 = *(int *)(*(int *)(param_2 + 0xa98) + 0x28);
  switch(*(undefined4 *)(param_1 + 0x1a8)) {
  case 0:
    iVar6 = (int)*(short *)(param_1 + 0x1c);
    iVar8 = FUN_0036e864(param_2,0x1c);
    if (iVar8 == 0 || iVar6 == 0x1c) {
      iVar8 = FUN_0036e864(param_2,0x1d);
      if (iVar8 == 0 || iVar6 == 0x1d) {
        iVar8 = FUN_0036e864(param_2,0x1e);
        if (iVar8 == 0 || iVar6 == 0x1e) {
          iVar8 = 0;
        }
        else {
          iVar8 = 1;
        }
      }
      else {
        iVar8 = 2;
      }
    }
    else {
      iVar8 = 3;
    }
    if (iVar8 != 0) {
      piVar5 = (int *)(iRam003e0124 + iVar8 * 8);
      iVar8 = *piVar5;
      if (iVar8 != iVar6) {
        *(short *)(param_1 + 0x1c) = (short)iVar8;
        fVar9 = (float)VectorSignedToFloat(piVar5[1],(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x1ac) = fVar9 + *(float *)(param_1 + 0x1b0);
      }
    }
    if (*(short *)(param_1 + 0x1c) != iVar6 && iVar6 != 0) {
      FUN_0036beac(param_2,iVar6);
    }
    iVar8 = FUN_003705a0(*(undefined4 *)(param_1 + 0x1ac),uRam003e0128,param_1 + 0x2c);
    if (iVar8 != 0) {
      *(undefined2 *)(param_2 + 0x53f0) = 0;
      *(undefined4 *)(param_1 + 0x1a4) = uVar3;
      FUN_003725e0(param_2);
    }
    iVar8 = iRam003e012c;
    iVar7 = *(int *)(*(int *)(param_2 + 0xa98) + 0x28);
    uVar2 = (undefined2)(int)*(float *)(param_1 + 0x2c);
    iVar6 = 0;
    do {
      *(undefined2 *)(iVar7 + *(int *)(iVar8 + iVar6 * 4) * 0x10 + 2) = uVar2;
      iVar1 = iVar6 * 4;
      iVar6 = iVar6 + 2;
      *(undefined2 *)(iVar7 + *(int *)(iVar8 + iVar1 + 4) * 0x10 + 2) = uVar2;
    } while (iVar6 < 8);
    break;
  case 2:
    iVar6 = FUN_0036e864(param_2,*(undefined4 *)(param_1 + 0x1b4));
    if (iVar6 == 0) {
      *(float *)(param_1 + 0x1ac) = *(float *)(param_1 + 0x1b0);
    }
    else {
      *(float *)(param_1 + 0x1ac) = *(float *)(param_1 + 0x1b0) + fRam003e0130;
    }
    iVar6 = FUN_003705a0(*(undefined4 *)(param_1 + 0x1ac),uVar4,param_1 + 0x2c);
    if (iVar6 != 0) {
      *(undefined2 *)(param_2 + 0x53f0) = 0;
      *(undefined4 *)(param_1 + 0x1a4) = uVar3;
    }
    *(short *)(iVar8 + 0x62) = (short)(int)*(float *)(param_1 + 0x2c);
    break;
  case 3:
    iVar6 = FUN_0036e864(param_2,*(undefined4 *)(param_1 + 0x1b4));
    if (iVar6 == 0) {
      *(float *)(param_1 + 0x1ac) = *(float *)(param_1 + 0x1b0);
    }
    else {
      *(float *)(param_1 + 0x1ac) = *(float *)(param_1 + 0x1b0) + fRam003e0134;
    }
    iVar6 = FUN_003705a0(*(undefined4 *)(param_1 + 0x1ac),uVar4,param_1 + 0x2c);
    if (iVar6 != 0) {
      *(undefined2 *)(param_2 + 0x53f0) = 0;
      *(undefined4 *)(param_1 + 0x1a4) = uVar3;
    }
    *(short *)(iVar8 + 0x82) = (short)(int)*(float *)(param_1 + 0x2c);
    break;
  case 4:
    iVar6 = FUN_0036e864(param_2,*(undefined4 *)(param_1 + 0x1b4));
    if (iVar6 == 0) {
      *(float *)(param_1 + 0x1ac) = *(float *)(param_1 + 0x1b0);
    }
    else {
      *(float *)(param_1 + 0x1ac) = *(float *)(param_1 + 0x1b0) + fRam003e0138;
    }
    iVar6 = FUN_003705a0(*(undefined4 *)(param_1 + 0x1ac),uVar4,param_1 + 0x2c);
    if (iVar6 != 0) {
      *(undefined2 *)(param_2 + 0x53f0) = 0;
      *(undefined4 *)(param_1 + 0x1a4) = uVar3;
    }
    *(short *)(iRam003e013c + iVar8) = (short)(int)*(float *)(param_1 + 0x2c);
  }
  uVar3 = uRam003e0140;
  if ((*(float *)(param_1 + 0x2c) <= *(float *)(param_1 + 0x1ac)) &&
     (*(float *)(param_1 + 0x1ac) <= *(float *)(param_1 + 0x2c))) {
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xefe7ffff | 0x200000;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  return;
}
