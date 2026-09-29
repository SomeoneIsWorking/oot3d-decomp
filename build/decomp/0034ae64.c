// OoT3D decomp @ 0034ae64  name=FUN_0034ae64  size=768

void FUN_0034ae64(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar12;

  iVar10 = DAT_0034b140;
  uVar9 = DAT_0034b13c;
  uVar3 = DAT_0034b138;
  uVar2 = DAT_0034b134;
  sVar1 = *(short *)(param_2 + 0x2238);
  if (sVar1 == 0) {
    if (*(char *)(param_2 + 0x2237) == '\0') {
      if (*(short *)(param_1 + 0x318c) == 2) {
        *(undefined2 *)(param_1 + 0x318c) = 3;
      }
      return;
    }
    if (((*(uint *)(DAT_0034b164 + 0xc0) & 1) == 0) &&
       (iVar10 = FUN_003679b4(DAT_0034b168), puVar7 = DAT_0034b170, uVar2 = DAT_0034b16c,
       iVar10 != 0)) {
      *DAT_0034b170 = uVar3;
      puVar7[1] = uVar3;
      puVar7[2] = uVar2;
    }
    *(undefined2 *)(param_2 + 0x2238) = 0x3c;
    FUN_0034711c(param_1,param_2,param_2 + 0x28,DAT_0034b170,5);
    FUN_0036f59c(param_2,DAT_0034b174);
    FUN_00371808(param_1,DAT_0034b178,0x7d,param_2,0);
    return;
  }
  if (sVar1 < 1) {
    if (*(short *)(DAT_0034b140 + 0xb2) == 0) {
      uVar11 = *(uint *)(param_2 + 0x1710);
      *(uint *)(param_2 + 0x1710) = uVar11 & 0xffffff7f;
      if ((uVar11 & 0x8000000) == 0) {
        FUN_0034bc38(DAT_0034b150,param_2,param_1);
      }
      else {
        FUN_0036055c(param_1,param_2,DAT_0034b14c,1);
        FUN_00360190(uVar2,uVar3,uVar3,uVar9,param_2 + 0x254,param_1,0x34,0);
      }
      fVar6 = DAT_0034b15c;
      fVar5 = DAT_0034b158;
      iVar10 = *DAT_0034b154;
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(char *)(param_2 + 0x249f) = (char)(int)(DAT_0034b158 / fVar12 + DAT_0034b15c);
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      iVar10 = -(int)(fVar5 / fVar12 + fVar6);
      if (*(char *)(DAT_0034b160 + param_2) <= iVar10) {
        iVar10 = (int)*(char *)(DAT_0034b160 + param_2);
      }
      *(char *)(param_2 + 0x2488) = (char)iVar10;
      *(undefined1 *)(param_2 + 0x227b) = 0;
      FUN_00355fac(0,1,0x7f,3,unaff_r4,unaff_lr);
      FUN_00355fac(3,1,0x7f);
      return;
    }
  }
  else {
    *(short *)(param_2 + 0x2238) = sVar1 + -1;
    uVar4 = DAT_0034b148;
    uVar8 = DAT_0034b144;
    if ((short)(sVar1 + -1) == 0) {
      if ((*(uint *)(param_2 + 0x1710) & 0x8000000) == 0) {
        uVar9 = FUN_003603c0(param_2 + 0x254,DAT_0034b148);
        uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00360190(uVar2,uVar8,uVar9,uVar3,param_2 + 0x254,param_1,uVar4,2);
      }
      else {
        uVar8 = FUN_003603c0(param_2 + 0x254,0x34);
        uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00360190(uVar2,uVar3,uVar8,uVar9,param_2 + 0x254,param_1,0x34,2);
      }
      *(undefined2 *)(iVar10 + 0xb2) = 0x140;
      *(undefined1 *)(param_1 + 0x7f40) = 0xd3;
      *(undefined2 *)(param_2 + 0x2238) = 0xffff;
    }
  }
  return;
}
