// OoT3D decomp @ 001e0b48  name=FUN_001e0b48  size=444

void FUN_001e0b48(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;

  uVar4 = DAT_001e0d04;
  FUN_0037572c(DAT_001e0d08);
  *(undefined4 *)(param_1 + 0x274) = 1;
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00350eb8(param_2,param_1 + 0x1fc);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_001e0d0c);
  FUN_00350d48(param_2,param_1 + 0x1fc,param_1,DAT_001e0d10,param_1 + 0x21c);
  if (*(short *)(param_1 + 0x1c) == 0) {
    uVar4 = DAT_001e0d14;
  }
  FUN_00372d4c(uVar4,DAT_001e0d18,param_1 + 0xbc,DAT_001e0d1c);
  uVar4 = DAT_001e0d20;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  iVar3 = FUN_00369334(uVar4,param_2,param_1,0x5c,1);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
  }
  *(undefined2 *)(param_1 + 0xb0) = 10;
  *(undefined2 *)(param_1 + 0xb2) = 10;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  uVar1 = DAT_001e0d30;
  uVar4 = DAT_001e0d2c;
  if (*(short *)(param_1 + 0x1c) == 0) {
    *(undefined4 *)(param_1 + 0x70) = DAT_001e0d24;
    *(undefined2 *)(param_1 + 0x26c) = 0xd2;
    *(undefined2 *)(param_1 + 0x27a) = 0xf;
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,3);
    *(undefined1 *)(param_1 + 0xb6) = 200;
    *(undefined4 *)(param_1 + 0x270) = DAT_001e0d28;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  else {
    *(undefined1 *)(param_1 + 0xb6) = 0xff;
    *(undefined4 *)(param_1 + 0x280) = uVar4;
    *(undefined1 *)(param_1 + 0x278) = 1;
    *(undefined4 *)(param_1 + 0x270) = uVar1;
  }
  fVar2 = DAT_001e0d34;
  *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x100) + DAT_001e0d34;
  *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0xfc) + fVar2;
  FUN_00372f38(param_1,param_2,param_1 + 0x284,2,param_1 + 0x288,1,param_1 + 0x28c,0,0);
  *(undefined1 *)(param_1 + 0x19b) = 1;
  return;
}
