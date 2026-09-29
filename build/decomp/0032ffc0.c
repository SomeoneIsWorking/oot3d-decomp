// OoT3D decomp @ 0032ffc0  name=FUN_0032ffc0  size=292

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0032ffc0(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;

  if (((-1 < *(short *)(param_1 + 0x1c)) &&
      (iVar5 = FUN_0035e600(DAT_0033018c,param_1,param_2,
                            (int)(short)(*(short *)(param_1 + 0xbe) + 0x3fff)), iVar5 == 0)) &&
     (iVar5 = FUN_0035e600(DAT_00330190,param_1,param_2,
                           (int)(short)(*(short *)(param_1 + 0xbe) + 0x3fff)), iVar5 == 0)) {
    FUN_00370350(DAT_0032fbb4,param_1 + 0x1a4,0);
    *(undefined4 *)(param_1 + 0xa48) = 5;
    if (-1 < *(short *)(param_1 + 0x1c)) {
      uVar4 = FUN_00373fa4(param_1 + 0x28,(int)*(short *)(param_1 + 0xa6a));
      *(short *)(param_1 + 0xa6a) = (short)uVar4;
      uVar3 = FUN_003262b8(param_1 + 0x28,uVar4,(int)*(short *)(param_1 + 0xa6c),param_2);
      *(undefined2 *)(param_1 + 0xa6e) = uVar3;
      *(undefined4 *)(param_1 + 0xa50) = 0;
    }
    uVar4 = DAT_0032fbbc;
    *(undefined4 *)(param_1 + 0x6c) = DAT_0032fbb8;
    *(undefined4 *)(param_1 + 0xa54) = uVar4;
    return;
  }
  FUN_0036e734(param_1 + 0x1a4,0xc);
  iVar5 = *(int *)(DAT_00330194 + param_2);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,4000);
  sVar1 = *(short *)(iVar5 + 0xbe);
  fVar6 = (float)FUN_002cfca0((int)(short)(sVar1 - *(short *)(param_1 + 0xbe)));
  fVar2 = DAT_00330198;
  uVar4 = DAT_0033019c;
  if ((DAT_00330198 <= fVar6) ||
     (fVar6 = (float)FUN_002cfca0((int)(short)(sVar1 - *(short *)(param_1 + 0xbe))),
     uVar4 = DAT_003301a0, fVar6 < fVar2)) {
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
  }
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + 0x3fff;
  *(float *)(param_1 + 0xa74) = fVar2;
  *(undefined4 *)(param_1 + 0xa50) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
