// OoT3D decomp @ 004c5378  name=FUN_004c5378  size=376

undefined4 FUN_004c5378(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 local_38 [7];

  local_38[0] = *DAT_004c54f0;
  local_38[1] = DAT_004c54f0[1];
  local_38[2] = DAT_004c54f0[2];
  local_38[3] = DAT_004c54f0[3];
  local_38[4] = DAT_004c54f0[4];
  local_38[5] = DAT_004c54f0[5];
  local_38[6] = DAT_004c54f0[6];
  uVar4 = *DAT_004c54f4;
  iVar1 = FUN_003255f0(param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    if (*(char *)(param_4 + 0x1a9) == '\a') {
      FUN_0036932c(*(undefined4 *)(param_4 + 0x27c),4);
      FUN_0036932c(*(undefined4 *)(param_4 + 0x27c),0x11);
    }
    iVar1 = DAT_004c54fc;
    if (*(char *)(DAT_004c54f8 + param_4) == '\x02') {
      if (param_2 == 0xf) {
        FUN_004c61d4(param_4,*(undefined4 *)(DAT_004c5500 + *(int *)(DAT_004c54fc + 4) * 4));
      }
      else if (param_2 == 0x10) {
        FUN_002b7cf4(param_4,*(undefined4 *)(DAT_004c5504 + *(int *)(DAT_004c54fc + 4) * 4));
      }
      else if (param_2 == 0x13) {
        FUN_004c621c(param_4,*(undefined4 *)(DAT_004c5508 + *(int *)(DAT_004c54fc + 4) * 4));
      }
      else if (param_2 == 0x14) {
        uVar2 = *(undefined4 *)(DAT_004c550c + *(int *)(DAT_004c54fc + 4) * 4);
        if (*(char *)(param_4 + 0x1a9) == '\x10' || *(char *)(param_4 + 0x1a9) == '\x11') {
          uVar2 = 0x22;
        }
        FUN_0033ce74(param_4,uVar2);
        if (*(int *)(iVar1 + 4) == 0) {
          uVar3 = 0;
          do {
            FUN_002b9bf8(param_4,local_38[uVar3],0);
            uVar3 = uVar3 + 1;
          } while (uVar3 < 7);
        }
        else {
          FUN_002b9bf8(param_4,uVar4,0);
        }
      }
    }
  }
  return 0;
}
