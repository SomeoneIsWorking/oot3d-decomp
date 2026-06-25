// OoT3D decomp @ 004bf18c  name=FUN_004bf18c  size=528

void FUN_004bf18c(int param_1,undefined4 param_2)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  
  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x60;
  if (-1 < *(char *)(DAT_004bf39c + param_1)) {
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004bf3a0 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if ((int)*(char *)(DAT_004bf39c + param_1) < (int)(DAT_004bf3a4 / fVar7 + DAT_004bf3a8)) {
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004bf3a0 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(char *)(param_1 + 0x2488) = (char)(int)(DAT_004bf3a4 / fVar7 + DAT_004bf3a8);
    }
  }
  uVar4 = *(uint *)(param_1 + 0x1710);
  bVar6 = (uVar4 & 0x20000000) == 0;
  if (bVar6) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x2238);
  }
  if ((bVar6 && uVar4 == 0) && (*(char *)(param_1 + 0x2291) != '\0')) {
    sVar2 = *(short *)(param_1 + 0xbe);
    sVar3 = *(short *)(param_1 + 0x2292);
    *(undefined4 *)(param_1 + 0x221c) = *(undefined4 *)(param_1 + 0x2294);
    *(short *)(param_1 + 0xbe) = sVar3;
    *(short *)(param_1 + 0x2220) = sVar3;
    if (0x8000 < (int)(short)(sVar2 - sVar3) + 0x4000U) {
      *(short *)(param_1 + 0xbe) = sVar3 + -0x8000;
    }
    fVar7 = DAT_004bf3ac;
    bVar6 = *(float *)(param_1 + 100) < DAT_004bf3ac;
    if (bVar6) {
      *(float *)(param_1 + 0x70) = DAT_004bf3ac;
    }
    if (bVar6) {
      *(float *)(param_1 + 100) = fVar7;
    }
  }
  iVar5 = FUN_0036b4ec(param_1 + 0x254,param_2);
  bVar6 = iVar5 == 0;
  if (!bVar6) {
    bVar6 = (*(ushort *)(param_1 + 0x90) & 1) == 0;
  }
  if (!bVar6) {
    if (*(short *)(param_1 + 0x2238) == 0) {
      if ((*(uint *)(param_1 + 0x1710) & 0x20000000) == 0) {
        bVar1 = *(byte *)(param_1 + 0x1321);
        bVar6 = (bVar1 & 2) != 0;
        if (!bVar6) {
          bVar1 = *(byte *)(param_1 + 0x2291);
        }
        if (bVar6 || bVar1 != 0) goto LAB_004bf374;
        FUN_0036055c(param_2,param_1,DAT_004bf3b4,0);
        *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x4000000;
      }
      else {
        *(undefined2 *)(param_1 + 0x2238) = 1;
      }
      FUN_003604f0(param_1 + 0x254,param_2);
      if (*(char *)(param_1 + 2) == '\x02') {
        FUN_0036f59c(param_1,DAT_004bf3b8 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
      }
      else {
        FUN_0036aeb4(param_1 + 0x28);
      }
    }
    else {
      sVar2 = *(short *)(param_1 + 0x2238) + -1;
      *(short *)(param_1 + 0x2238) = sVar2;
      if (sVar2 == 0) {
        FUN_0034bc38(DAT_004bf3b0,param_1,param_2);
      }
    }
  }
LAB_004bf374:
  if ((*(ushort *)(param_1 + 0x90) & 2) == 0) {
    return;
  }
  FUN_0036f59c(param_1,*(int *)(param_1 + 0x228c) + 0x1000051);
  return;
}

