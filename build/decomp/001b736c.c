// OoT3D decomp @ 001b736c  name=FUN_001b736c  size=760

void FUN_001b736c(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;

  FUN_0037632c(param_1,param_1 + 0x3f8);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x3f8);
  if ((((*(short *)(param_1 + 0x47c) == 0) ||
       (sVar3 = *(short *)(param_1 + 0x47c) + -1, *(short *)(param_1 + 0x47c) = sVar3, sVar3 == 0))
      && ((*(uint *)(param_2 + 0xf8) & 1) != 0)) &&
     (sVar3 = *(short *)(param_1 + 0x47e) + 1, *(short *)(param_1 + 0x47e) = sVar3, 2 < sVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(0x1e);
  }
  iVar2 = DAT_001b7670;
  if (*(short *)(param_2 + 0x104) == 0x28) {
    *(undefined2 *)(param_1 + 0x480) = 0xff;
    *(undefined1 *)(param_1 + 0xd0) = 0xff;
LAB_001b7474:
    FUN_003731e0(param_1 + 0x1a4);
    if (*(short *)(param_1 + 0x480) != 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xdfffffff;
      goto LAB_001b74a4;
    }
  }
  else {
    uVar7 = DAT_001b767c;
    if (((*(uint *)(DAT_001b7670 + 0xbc) & *(uint *)(DAT_001b7674 + 0x48)) != 0) &&
       ((*(ushort *)(DAT_001b7670 + 0xeee) & 0x1000) == 0 && *(short *)(param_2 + 0x104) == 0x55)) {
      uVar7 = DAT_001b7678;
    }
    uVar4 = FUN_00341c28(uVar7,param_1,param_2,(int)*(short *)(param_1 + 0x480));
    *(undefined2 *)(param_1 + 0x480) = uVar4;
    *(char *)(param_1 + 0xd0) = (char)uVar4;
    if (*(short *)(param_1 + 0x480) != 0) goto LAB_001b7474;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20000000;
LAB_001b74a4:
  FUN_00376864(param_1);
  iVar9 = *(int *)(DAT_001b7680 + param_2);
  if (*(int *)(param_1 + 0x98) < DAT_001b7684) {
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x92),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x92),(byte)(in_fpscr >> 0x15) & 3
                                       );
    sVar3 = (short)(int)(fVar11 - fVar13);
    if ((short)(int)(fVar12 - fVar10) < 0) {
      sVar3 = -sVar3;
    }
    iVar5 = FUN_001c4ddc(2);
    if (iVar5 < sVar3) {
      uVar7 = 1;
    }
    else {
      uVar7 = 2;
    }
    bVar1 = true;
  }
  else {
    uVar7 = 1;
    bVar1 = false;
  }
  if (*(short *)(param_1 + 0x450) != 0) {
    uVar7 = 4;
  }
  if (*(int *)(param_1 + 0x3f4) == DAT_001b7688) {
    uVar7 = 1;
    bVar1 = false;
  }
  if (*(int *)(param_1 + 0x3f4) == DAT_001b768c) {
    uVar7 = 4;
    bVar1 = true;
  }
  iVar5 = FUN_0037571c(param_2);
  uVar6 = DAT_001b7694;
  if (*DAT_001b7690 == 0 && iVar5 == 0) {
    uVar6 = *(undefined4 *)(iVar9 + 0x2c);
    uVar8 = *(undefined4 *)(iVar9 + 0x30);
    *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(iVar9 + 0x28);
    *(undefined4 *)(param_1 + 0x46c) = uVar6;
    *(undefined4 *)(param_1 + 0x470) = uVar8;
    if (*(int *)(iVar2 + 4) < 1) {
      uVar6 = 0xffffffee;
    }
    else {
      uVar6 = 0;
    }
    uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
  }
  else {
    uVar7 = *(undefined4 *)(param_2 + 0x1bc);
    uVar8 = *(undefined4 *)(param_2 + 0x1c0);
    *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x1b8);
    *(undefined4 *)(param_1 + 0x46c) = uVar7;
    *(undefined4 *)(param_1 + 0x470) = uVar8;
    uVar7 = 2;
  }
  *(undefined4 *)(param_1 + 0x464) = uVar6;
  FUN_0034c664(param_1,param_1 + 0x450,2,uVar7);
  if (*(int *)(param_1 + 0x3f4) != DAT_001b7698 && bVar1) {
    FUN_00342714(*(float *)(param_1 + 0x438) + DAT_001b76a0,param_2,param_1,param_1 + 0x450,
                 DAT_001b76a4,DAT_001b769c);
  }
  uVar7 = DAT_001b76a8;
  if (*(char *)(param_1 + 0xc20) == '\0') {
    FUN_00376340(DAT_001b76a8,DAT_001b76a8,DAT_001b76a8,param_2,param_1,4);
    *(undefined1 *)(param_1 + 0xc20) = 1;
    *(undefined4 *)(param_1 + 0x70) = uVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x001b766c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x3f4))(param_1,param_2);
  return;
}
