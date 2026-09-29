// OoT3D decomp @ 00438220  name=FUN_00438220  size=292

int FUN_00438220(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,
                undefined4 param_9)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;

  if (*(char *)(param_1 + 0x1e8) == '\0') {
    *(undefined1 *)(param_1 + 0x1e8) = 1;
    *(undefined1 *)(param_1 + 0x1eb) = 0;
    *(char *)(param_1 + 0x1ea) = (char)param_9;
  }
  *(int *)(param_1 + 0x1e4) = param_8;
  puVar1 = DAT_00438344;
  local_2c = param_6;
  uStack_28 = param_7;
  if (param_8 == 1) {
    param_4 = 0;
  }
  local_30 = param_5;
  local_24 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  if (((*DAT_00438344 & 1) == 0) &&
     (uVar5 = FUN_003679b4(DAT_00438344), param_2 = (undefined4)((ulonglong)uVar5 >> 0x20),
     (int)uVar5 != 0)) {
    FUN_002ea0a8(DAT_00438348);
    param_2 = DAT_00438350;
  }
  uVar2 = DAT_00438348;
  if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_00438344,param_2), iVar3 != 0)) {
    FUN_002ea0a8(uVar2);
  }
  if (param_8 == 1) {
    puVar4 = &local_30;
  }
  else {
    puVar4 = (undefined4 *)0x0;
  }
  iVar3 = FUN_0044a740(&local_24,DAT_00438358,DAT_00438348,puVar4,DAT_00438354,uVar2,param_8);
  FUN_00453bd8(param_9);
  return (iVar3 >> 0x1f) + 1;
}
