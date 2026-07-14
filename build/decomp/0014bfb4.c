// OoT3D decomp @ 0014bfb4  name=FUN_0014bfb4  size=432

void FUN_0014bfb4(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (((*(uint *)(DAT_0014c164 + 0xc) & 1) == 0) &&
     (iVar2 = FUN_003679b4(DAT_0014c168), puVar1 = DAT_0014c170, uVar3 = DAT_0014c16c, iVar2 != 0))
  {
    *DAT_0014c170 = DAT_0014c16c;
    puVar1[1] = uVar3;
    puVar1[2] = uVar3;
  }
  local_20 = *(undefined4 *)(param_1 + 0x28);
  uStack_1c = *(undefined4 *)(param_1 + 0x2c);
  uStack_18 = *(undefined4 *)(param_1 + 0x30);
  if (*(short *)(param_1 + 0x95c) == 0xff) {
    uVar3 = FUN_003687a8(*(undefined4 *)(param_1 + 0x208));
    FUN_00357a28(uVar3,5,&local_30);
    local_24 = (float)DAT_0014c174;
    FUN_00358964(uVar3,5,&local_30);
    FUN_0035e240(param_1 + 0x1e0,param_1 + 0x148,DAT_0014c17c,DAT_0014c178,param_1,0);
    FUN_00357878(param_1,&local_20,DAT_0014c170,0xff,param_2);
    if (*(char *)(param_1 + 0x963) != '\0') {
      *(short *)(param_1 + 0x11a) = *(short *)(param_1 + 0x11a) + 1;
      *(char *)(param_1 + 0x963) = *(char *)(param_1 + 0x963) + -1;
    }
    return;
  }
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  local_24 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x95c),
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_24 = local_24 * DAT_0014c180;
  uVar3 = FUN_003687a8(*(undefined4 *)(param_1 + 0x208));
  FUN_003589cc(uVar3,5);
  FUN_00358964(uVar3,5,&local_30);
  FUN_0035e240(param_1 + 0x1e0,param_1 + 0x148,DAT_0014c17c,0,param_1,0);
  FUN_00357878(param_1,&local_20,DAT_0014c170,*(ushort *)(param_1 + 0x95c) & 0xff,param_2);
  return;
}

