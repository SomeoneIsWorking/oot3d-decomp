// OoT3D decomp @ 003071e0  name=FUN_003071e0  size=256

void FUN_003071e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;

  iVar1 = DAT_003072e0;
  *(undefined4 *)(DAT_003072e0 + 0x30) = 0xffffffff;
  if (((*DAT_003072e4 & 1) == 0) &&
     (uVar3 = FUN_003679b4(DAT_003072e4), param_2 = (undefined4)((ulonglong)uVar3 >> 0x20),
     (int)uVar3 != 0)) {
    FUN_0036788c(DAT_003072e8);
    param_2 = DAT_003072f0;
  }
  FUN_0031025c(DAT_003072e8,param_2);
  FUN_002f233c();
  FUN_002fc748();
  if (*(int *)(iVar1 + 0x20) != 0) {
    FUN_002db5d8();
    FUN_003525d4();
    *(undefined4 *)(iVar1 + 0x20) = 0;
  }
  if (*(int *)(iVar1 + 0x28) != 0) {
    FUN_002db5d8();
    FUN_003525d4();
    *(undefined4 *)(iVar1 + 0x28) = 0;
  }
  uVar2 = DAT_003072f4;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = uVar2;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  if (*(int *)(iVar1 + 100) != 0) {
    FUN_0031b9c0(*(int *)(iVar1 + 100),1);
    FUN_00303ea8(*(undefined4 *)(iVar1 + 100));
    FUN_0034fc6c();
    FUN_0031b99c(*(undefined4 *)(iVar1 + 100));
    *(undefined4 *)(iVar1 + 100) = 0;
  }
  return;
}
