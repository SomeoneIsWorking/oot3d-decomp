// OoT3D decomp @ 00113050  name=FUN_00113050  size=456

void FUN_00113050(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_20;

  if (*(int *)(param_1 + 0x124) == 0) {
    uVar3 = FUN_00369334(DAT_00113218,param_2,param_1,0xa4,5);
    *(undefined4 *)(param_1 + 0x124) = uVar3;
  }
  uVar3 = DAT_00113220;
  uVar2 = (undefined2)DAT_0011321c;
  local_20 = param_4;
  if ((*(byte *)(param_1 + 0x360) < 8) && ((*(byte *)(param_1 + 0x3b1) & 2) != 0)) {
    *(byte *)(param_1 + 0x3b1) = *(byte *)(param_1 + 0x3b1) & 0xfd;
    if (*(char *)(param_1 + 0xb9) == '\0' || *(char *)(param_1 + 0xb9) == '\x06') goto LAB_001131dc;
    local_20 = 0x10;
    FUN_00375ed8(param_1,0x400000,0xff,0);
    iVar4 = FUN_00375eb8(param_1);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0x360) = 8;
      *(undefined2 *)(param_1 + 0x368) = uVar2;
      iVar4 = *(int *)(param_1 + 0x124);
      sVar1 = 0;
      if (iVar4 != 0) {
        sVar1 = *(short *)(iVar4 + 0x1c);
      }
      if (iVar4 != 0 && sVar1 != 10) {
        FUN_00375bcc(param_1,uVar3);
        sVar1 = *(short *)(*(int *)(param_1 + 0x124) + 0x1c);
        if (sVar1 < 1) {
          *(short *)(*(int *)(param_1 + 0x124) + 0x1c) = sVar1 + -1;
        }
      }
      *(undefined4 *)(param_1 + 0x364) = DAT_00113224;
      *(undefined1 *)(param_1 + 0xb7) = 8;
      FUN_00374444(param_2,param_1,param_1 + 0x28,0xe0);
    }
    else {
      FUN_00375bcc(param_1,DAT_00113228);
      *(undefined1 *)(param_1 + 0x360) = 9;
      *(undefined2 *)(param_1 + 0x368) = 0x17;
      *(undefined4 *)(param_1 + 0x364) = DAT_0011322c;
    }
  }
  if ((*(int *)(param_1 + 0x124) != 0) && (*(short *)(*(int *)(param_1 + 0x124) + 0x1c) == 10)) {
    *(undefined1 *)(param_1 + 0x360) = 8;
    *(undefined2 *)(param_1 + 0x368) = uVar2;
    if (*(short *)(*(int *)(param_1 + 0x124) + 0x1c) != 10) {
      FUN_00375bcc(param_1,uVar3);
      sVar1 = *(short *)(*(int *)(param_1 + 0x124) + 0x1c);
      if (sVar1 < 1) {
        *(short *)(*(int *)(param_1 + 0x124) + 0x1c) = sVar1 + -1;
      }
    }
    *(undefined4 *)(param_1 + 0x364) = DAT_00113224;
  }
LAB_001131dc:
  (**(code **)(param_1 + 0x364))(param_1,param_2);
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x3a0);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x3a0,local_20);
  return;
}
