// OoT3D decomp @ 001bbc0c  name=FUN_001bbc0c  size=452

void FUN_001bbc0c(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;

  FUN_003510b0(param_1,DAT_001bbdec);
  *(undefined1 *)(param_1 + 0x1f) = 3;
  FUN_0037572c(DAT_001bbdf0,param_1);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x430,10);
  uVar1 = DAT_001bbdf4;
  if (*(short *)(param_1 + 0x1c) != -2) {
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar4 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_001bbdf8 + iVar4) != 0)) {
      iVar4 = iVar4 + 0x3a5c;
    }
    else {
      iVar4 = 0;
    }
    uVar5 = FUN_00372f0c(iVar4 + 0x10,0);
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0xc),uVar5);
    piVar2 = DAT_001bbe00;
    uVar5 = DAT_001bbdfc;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0xc) + 0xc) = uVar1;
    if (*piVar2 == 0) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0xc) + 8) = uVar5;
      FUN_003586ec();
    }
  }
  FUN_00372d4c(DAT_001bbe0c,DAT_001bbe04,param_1 + 0xbc,DAT_001bbe08);
  uVar1 = DAT_001bbe10;
  *(undefined1 *)(param_1 + 0x639) = 0;
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  *(undefined2 *)(param_1 + 0x658) = 0;
  *(undefined4 *)(param_1 + 0x64c) = 0;
  *(undefined1 *)(param_1 + 0x65d) = 0;
  fVar3 = DAT_001bbe14;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar3;
  *(undefined1 *)(param_1 + 0xb7) = 2;
  *(undefined1 *)(param_1 + 0xb6) = 0xfe;
  FUN_00350eb8(param_2,param_1 + 0x660);
  FUN_00350d48(param_2,param_1 + 0x660,param_1,DAT_001bbe18,param_1 + 0x680);
  *(undefined4 *)(param_1 + 0x654) = 0x1d;
  if (*(short *)(param_1 + 0x1c) == -2) {
    *(undefined4 *)(param_1 + 0x654) = 0x5d;
    *(undefined1 *)(param_1 + 0xb7) = 4;
    *(char *)(param_1 + 0x123) = *(char *)(param_1 + 0x123) + '\x01';
  }
  FUN_00370350(DAT_001bbe1c,param_1 + 0x1a4,0);
  *(undefined1 *)(param_1 + 0x638) = 6;
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0xf,0x1e);
}
