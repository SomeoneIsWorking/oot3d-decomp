// OoT3D decomp @ 0035dd44  name=FUN_0035dd44  size=112

void FUN_0035dd44(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;

  FUN_0035e3a4(param_1 + 0x3b8,0,*(undefined1 *)(param_1 + 0x290));
  FUN_0035e330(param_1 + 0x3b8);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0);
  FUN_0035e04c(*(undefined4 *)(param_1 + 0x2e0),param_2,param_1,param_1 + 0x2d4,
               *(undefined1 *)(param_1 + 0x2f9));
  fVar3 = DAT_0035e048;
  uVar2 = DAT_0035e044;
  uVar1 = DAT_0035e040;
  iVar4 = *(int *)(param_1 + 0x330);
  iVar5 = *(int *)(param_1 + 0x368);
  if (iVar4 != 0 || iVar5 != 0) {
    if (*(char *)(DAT_0035e03c + 0xe) == '\0') {
      if (iVar4 != 0) {
        FUN_0032cecc(*(undefined4 *)(param_1 + 0x324),*(undefined4 *)(param_1 + 0x328),
                     *(undefined4 *)(param_1 + 0x32c),DAT_0035e040,DAT_0035e044,param_2,
                     *(undefined4 *)(param_1 + 0x314),*(undefined4 *)(param_1 + 0x318),
                     *(undefined4 *)(param_1 + 0x31c),*(undefined4 *)(param_1 + 800),8,0x10,
                     *(undefined4 *)(param_1 + 0x3a4));
      }
      if (iVar5 != 0) {
        FUN_0032cecc(*(undefined4 *)(param_1 + 0x35c),*(undefined4 *)(param_1 + 0x360),
                     *(undefined4 *)(param_1 + 0x364),uVar2,uVar2,param_2,
                     *(undefined4 *)(param_1 + 0x34c),*(undefined4 *)(param_1 + 0x350),
                     *(undefined4 *)(param_1 + 0x354),*(undefined4 *)(param_1 + 0x358),8,0x10,
                     *(undefined4 *)(param_1 + 0x3a4));
      }
      if (iVar4 != 0) {
        FUN_0032cecc(*(undefined4 *)(param_1 + 0x30c),*(undefined4 *)(param_1 + 0x310),
                     *(undefined4 *)(param_1 + 0x32c),uVar1,uVar2,param_2,
                     *(undefined4 *)(param_1 + 0x2fc),*(undefined4 *)(param_1 + 0x300),
                     *(undefined4 *)(param_1 + 0x304),*(undefined4 *)(param_1 + 0x308),8,8,
                     *(undefined4 *)(param_1 + 0x3a0));
      }
      if (iVar5 != 0) {
        FUN_0032cecc(*(undefined4 *)(param_1 + 0x344),*(undefined4 *)(param_1 + 0x348),
                     *(undefined4 *)(param_1 + 0x364),uVar2,uVar2,param_2,
                     *(undefined4 *)(param_1 + 0x334),*(undefined4 *)(param_1 + 0x338),
                     *(undefined4 *)(param_1 + 0x33c),*(undefined4 *)(param_1 + 0x340),8,8,
                     *(undefined4 *)(param_1 + 0x3a0));
        return;
      }
    }
    else {
      if (iVar4 != 0) {
        FUN_0032cecc(DAT_0035e048 - *(float *)(param_1 + 0x324),*(undefined4 *)(param_1 + 0x328),
                     *(undefined4 *)(param_1 + 0x32c),DAT_0035e044,DAT_0035e044,param_2,
                     *(undefined4 *)(param_1 + 0x314),*(undefined4 *)(param_1 + 0x318),
                     *(undefined4 *)(param_1 + 0x31c),*(undefined4 *)(param_1 + 800),8,0x10,
                     *(undefined4 *)(param_1 + 0x3a4));
      }
      if (iVar5 != 0) {
        FUN_0032cecc(fVar3 - *(float *)(param_1 + 0x35c),*(undefined4 *)(param_1 + 0x360),
                     *(undefined4 *)(param_1 + 0x364),uVar1,uVar2,param_2,
                     *(undefined4 *)(param_1 + 0x34c),*(undefined4 *)(param_1 + 0x350),
                     *(undefined4 *)(param_1 + 0x354),*(undefined4 *)(param_1 + 0x358),8,0x10,
                     *(undefined4 *)(param_1 + 0x3a4));
      }
      if (iVar4 != 0) {
        FUN_0032cecc(fVar3 - *(float *)(param_1 + 0x30c),*(undefined4 *)(param_1 + 0x310),
                     *(undefined4 *)(param_1 + 0x32c),uVar2,uVar2,param_2,
                     *(undefined4 *)(param_1 + 0x2fc),*(undefined4 *)(param_1 + 0x300),
                     *(undefined4 *)(param_1 + 0x304),*(undefined4 *)(param_1 + 0x308),8,8,
                     *(undefined4 *)(param_1 + 0x3a0));
      }
      if (iVar5 != 0) {
        FUN_0032cecc(fVar3 - *(float *)(param_1 + 0x344),*(undefined4 *)(param_1 + 0x348),
                     *(undefined4 *)(param_1 + 0x364),uVar1,uVar2,param_2,
                     *(undefined4 *)(param_1 + 0x334),*(undefined4 *)(param_1 + 0x338),
                     *(undefined4 *)(param_1 + 0x33c),*(undefined4 *)(param_1 + 0x340),8,8,
                     *(undefined4 *)(param_1 + 0x3a0));
      }
    }
  }
  return;
}
