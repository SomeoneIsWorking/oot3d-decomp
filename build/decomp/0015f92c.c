// OoT3D decomp @ 0015f92c  name=FUN_0015f92c  size=532

void FUN_0015f92c(float param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  undefined4 uVar9;

  fVar8 = DAT_0015fb50;
  uVar2 = DAT_0015fb4c;
  uVar9 = DAT_0015fb48;
  uVar5 = DAT_0015fb44;
  fVar1 = DAT_0015fb40;
  iVar3 = (int)*(short *)(param_2 + 0xc28);
  if (iVar3 < 0x36) {
    if (iVar3 == 0x35) {
      iVar3 = 0;
      do {
        fVar8 = (float)FUN_003738a8(uVar9);
        *(short *)(param_2 + iVar3 * 2 + 0xc20) = (short)(int)(fVar8 + fVar1);
        iVar4 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar4 = *(int *)(param_2 + iVar4 + 0xc14);
        if (iVar4 != 0) {
          *(undefined1 *)(iVar4 + 0x688) = 1;
          *(undefined4 *)(iVar4 + 0x70) = uVar2;
        }
      } while (iVar3 < 3);
    }
    else {
      fVar6 = (float)(0x35 - (int)*(short *)(param_2 + 0xc20));
      if (iVar3 < (int)fVar6) {
        iVar3 = *(int *)(param_2 + 0xc14);
        if (iVar3 != 0) {
          fVar6 = *(float *)(iVar3 + 0x70);
          param_1 = fVar6;
        }
        if (iVar3 != 0 && (uint)fVar6 < 0xc0000000) {
          param_1 = param_1 - DAT_0015fb50;
          *(float *)(iVar3 + 0x70) = param_1;
        }
      }
      fVar6 = (float)(0x35 - (int)*(short *)(param_2 + 0xc22));
      if ((int)*(short *)(param_2 + 0xc28) < (int)fVar6) {
        iVar3 = *(int *)(param_2 + 0xc18);
        if (iVar3 != 0) {
          fVar6 = *(float *)(iVar3 + 0x70);
          param_1 = fVar6;
        }
        if (iVar3 != 0 && (uint)fVar6 < 0xc0000000) {
          param_1 = param_1 - fVar8;
          *(float *)(iVar3 + 0x70) = param_1;
        }
      }
      fVar6 = (float)(0x35 - (int)*(short *)(param_2 + 0xc24));
      if ((int)*(short *)(param_2 + 0xc28) < (int)fVar6) {
        iVar3 = *(int *)(param_2 + 0xc1c);
        if (iVar3 != 0) {
          fVar6 = *(float *)(iVar3 + 0x70);
          param_1 = fVar6;
        }
        if (iVar3 != 0 && (uint)fVar6 < 0xc0000000) {
          *(float *)(iVar3 + 0x70) = param_1 - fVar8;
        }
      }
    }
  }
  else {
    iVar3 = 1;
    do {
      iVar7 = param_2 + iVar3 * 4;
      iVar4 = *(int *)(iVar7 + 0xc14);
      if (iVar4 != 0) {
        FUN_00375a18(iVar4 + 0x36,(int)(short)((short)uVar5 + (short)iVar3 * -10000),2,0x800,0x100);
        iVar4 = *(int *)(iVar7 + 0xc14);
        *(undefined2 *)(iVar4 + 0xbe) = *(undefined2 *)(iVar4 + 0x36);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
  }
  uVar5 = DAT_0015fb54;
  if (*(short *)(param_2 + 0xc28) == 0) {
    *(undefined4 *)(param_2 + 0xbb0) = DAT_0015fb58;
    *(undefined4 *)(param_2 + 0xbac) = uVar5;
    *(ushort *)(param_2 + 0xc3c) = *(ushort *)(param_2 + 0xc3c) & 0xffef;
    uVar5 = FUN_0036ae14(param_2 + 0x1a4,6);
    uVar9 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = FUN_0036ae14(param_2 + 0x1a4,6);
    fVar8 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_0015fb5c,fVar8 - DAT_0015fb5c,uVar9,fVar1,param_2 + 0x1a4,6,2);
    FUN_0036e980(param_3,param_2,7);
    return;
  }
  return;
}
