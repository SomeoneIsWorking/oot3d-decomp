// OoT3D decomp @ 00166f0c  name=FUN_00166f0c  size=568

void FUN_00166f0c(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;

  FUN_003510b0(param_1,DAT_00167144);
  *(undefined4 *)(param_1 + 0xa0) = DAT_00167148;
  *(undefined1 *)(param_1 + 0xb7) = 2;
  FUN_00350eb8(param_2,param_1 + 0x1a8);
  FUN_00350d48(param_2,param_1 + 0x1a8,param_1,DAT_0016714c,param_1 + 0x1c8);
  fVar1 = DAT_00167158;
  FUN_00372d4c(param_1 + 0xbc,DAT_00167154);
  uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x380,0,param_1 + 900,1,param_1 + 0x388,2,
                       param_1 + 0x38c,0,param_1 + 0x390,0,param_1 + 0x394,0,param_1 + 0x398,0,
                       param_1 + 0x39c,0,param_1 + 0x3a0,0,param_1 + 0x3a4,0,param_1 + 0x3a8,0,
                       param_1 + 0x3ac,3,param_1 + 0x3b0,3,param_1 + 0x3b4,3,param_1 + 0x3b8,3,0);
  uVar3 = FUN_00372f0c(uVar2,0);
  uVar2 = DAT_0016715c;
  iVar4 = 0;
  do {
    iVar5 = param_1 + iVar4 * 4;
    FUN_00372d94(*(undefined4 *)(*(int *)(iVar5 + 0x3ac) + 0xc),uVar3);
    iVar4 = iVar4 + 1;
    *(undefined1 *)(*(int *)(*(int *)(iVar5 + 0x3ac) + 0xc) + 0x10) = 1;
    *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x3ac) + 0xc) + 0xc) = uVar2;
  } while (iVar4 < 4);
  *(undefined2 *)(param_1 + 0x232) = 0;
  uVar2 = DAT_00167160;
  *(undefined1 *)(param_1 + 0x238) = 0;
  FUN_0037572c(uVar2,param_1);
  uVar2 = DAT_00167164;
  *(undefined2 *)(param_1 + 0xbe) = 0;
  *(float *)(param_1 + 0x6c) = fVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(float *)(param_1 + 100) = fVar1;
  *(float *)(param_1 + 0x250) = fVar1;
  *(undefined2 *)(param_1 + 0x234) = 0;
  *(undefined2 *)(param_1 + 0x236) = 2;
  uVar2 = DAT_00167168;
  *(undefined4 *)(param_1 + 0x23c) = 0xff;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x248) = uVar2;
  if (*(short *)(param_1 + 0x1c) == 0) {
    *(undefined1 *)(param_1 + 0xb6) = 0;
    fVar6 = DAT_0016716c;
    *(undefined4 *)(param_1 + 0x240) = 0xff;
    *(undefined4 *)(param_1 + 0x23c) = 0;
    *(float *)(param_1 + 0x248) = fVar6;
    *(float *)(param_1 + 0x25c) = fVar1;
    uVar2 = DAT_00167178;
    if (fVar1 < *(float *)(param_1 + 0x88)) {
      fVar6 = DAT_00167170;
    }
    *(float *)(param_1 + 0x250) = fVar6 * DAT_00167174;
    *(undefined4 *)(param_1 + 0x244) = uVar2;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0016717c;
    return;
  }
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  *(undefined4 *)(param_1 + 0x13c) = DAT_00167180;
  *(undefined1 *)(param_1 + 0x1bc) = 9;
  return;
}
