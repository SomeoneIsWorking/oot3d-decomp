// OoT3D decomp @ 0035ddb4  name=FUN_0035ddb4  size=648

void FUN_0035ddb4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;

  fVar3 = DAT_0035e048;
  uVar2 = DAT_0035e044;
  uVar1 = DAT_0035e040;
  iVar4 = *(int *)(param_2 + 0x330);
  iVar5 = *(int *)(param_2 + 0x368);
  if (iVar4 != 0 || iVar5 != 0) {
    if (*(char *)(DAT_0035e03c + 0xe) == '\0') {
      if (iVar4 != 0) {
        FUN_0032cecc(*(undefined4 *)(param_2 + 0x324),*(undefined4 *)(param_2 + 0x328),
                     *(undefined4 *)(param_2 + 0x32c),DAT_0035e040,DAT_0035e044,param_1,
                     *(undefined4 *)(param_2 + 0x314),*(undefined4 *)(param_2 + 0x318),
                     *(undefined4 *)(param_2 + 0x31c),*(undefined4 *)(param_2 + 800),8,0x10,
                     *(undefined4 *)(param_2 + 0x3a4));
      }
      if (iVar5 != 0) {
        FUN_0032cecc(*(undefined4 *)(param_2 + 0x35c),*(undefined4 *)(param_2 + 0x360),
                     *(undefined4 *)(param_2 + 0x364),uVar2,uVar2,param_1,
                     *(undefined4 *)(param_2 + 0x34c),*(undefined4 *)(param_2 + 0x350),
                     *(undefined4 *)(param_2 + 0x354),*(undefined4 *)(param_2 + 0x358),8,0x10,
                     *(undefined4 *)(param_2 + 0x3a4));
      }
      if (iVar4 != 0) {
        FUN_0032cecc(*(undefined4 *)(param_2 + 0x30c),*(undefined4 *)(param_2 + 0x310),
                     *(undefined4 *)(param_2 + 0x32c),uVar1,uVar2,param_1,
                     *(undefined4 *)(param_2 + 0x2fc),*(undefined4 *)(param_2 + 0x300),
                     *(undefined4 *)(param_2 + 0x304),*(undefined4 *)(param_2 + 0x308),8,8,
                     *(undefined4 *)(param_2 + 0x3a0));
      }
      if (iVar5 != 0) {
        FUN_0032cecc(*(undefined4 *)(param_2 + 0x344),*(undefined4 *)(param_2 + 0x348),
                     *(undefined4 *)(param_2 + 0x364),uVar2,uVar2,param_1,
                     *(undefined4 *)(param_2 + 0x334),*(undefined4 *)(param_2 + 0x338),
                     *(undefined4 *)(param_2 + 0x33c),*(undefined4 *)(param_2 + 0x340),8,8,
                     *(undefined4 *)(param_2 + 0x3a0));
        return;
      }
    }
    else {
      if (iVar4 != 0) {
        FUN_0032cecc(DAT_0035e048 - *(float *)(param_2 + 0x324),*(undefined4 *)(param_2 + 0x328),
                     *(undefined4 *)(param_2 + 0x32c),DAT_0035e044,DAT_0035e044,param_1,
                     *(undefined4 *)(param_2 + 0x314),*(undefined4 *)(param_2 + 0x318),
                     *(undefined4 *)(param_2 + 0x31c),*(undefined4 *)(param_2 + 800),8,0x10,
                     *(undefined4 *)(param_2 + 0x3a4));
      }
      if (iVar5 != 0) {
        FUN_0032cecc(fVar3 - *(float *)(param_2 + 0x35c),*(undefined4 *)(param_2 + 0x360),
                     *(undefined4 *)(param_2 + 0x364),uVar1,uVar2,param_1,
                     *(undefined4 *)(param_2 + 0x34c),*(undefined4 *)(param_2 + 0x350),
                     *(undefined4 *)(param_2 + 0x354),*(undefined4 *)(param_2 + 0x358),8,0x10,
                     *(undefined4 *)(param_2 + 0x3a4));
      }
      if (iVar4 != 0) {
        FUN_0032cecc(fVar3 - *(float *)(param_2 + 0x30c),*(undefined4 *)(param_2 + 0x310),
                     *(undefined4 *)(param_2 + 0x32c),uVar2,uVar2,param_1,
                     *(undefined4 *)(param_2 + 0x2fc),*(undefined4 *)(param_2 + 0x300),
                     *(undefined4 *)(param_2 + 0x304),*(undefined4 *)(param_2 + 0x308),8,8,
                     *(undefined4 *)(param_2 + 0x3a0));
      }
      if (iVar5 != 0) {
        FUN_0032cecc(fVar3 - *(float *)(param_2 + 0x344),*(undefined4 *)(param_2 + 0x348),
                     *(undefined4 *)(param_2 + 0x364),uVar1,uVar2,param_1,
                     *(undefined4 *)(param_2 + 0x334),*(undefined4 *)(param_2 + 0x338),
                     *(undefined4 *)(param_2 + 0x33c),*(undefined4 *)(param_2 + 0x340),8,8,
                     *(undefined4 *)(param_2 + 0x3a0));
      }
    }
  }
  return;
}
