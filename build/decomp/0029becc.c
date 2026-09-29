// OoT3D decomp @ 0029becc  name=FUN_0029becc  size=352

void FUN_0029becc(int param_1)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float local_44;
  undefined1 auStack_40 [48];

  FUN_00372224(auStack_40,param_1 + 0x148);
  uVar2 = DAT_0029c040;
  iVar1 = FUN_003695f8();
  local_50 = *DAT_0029c048;
  uStack_4c = DAT_0029c048[1];
  uStack_48 = DAT_0029c048[2];
  if (iVar1 != 0) {
    uVar2 = DAT_0029c044;
  }
  local_44 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x270),
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_44 = local_44 * DAT_0029c04c;
  FUN_00358778(*(undefined4 *)(param_1 + 0x274),0,4,&local_50,2);
  FUN_00358778(*(undefined4 *)(param_1 + 0x274),1,4,&local_50,2);
  switch(((uint)*(ushort *)(param_1 + 0x1c) << 0x15) >> 0x1d) {
  case 0:
  case 1:
  case 4:
    if (*(int *)(param_1 + 0x274) != 0) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x274) + 0xc) + 0xc) = uVar2;
      *(undefined1 *)(*(int *)(param_1 + 0x274) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x274),auStack_40);
      FUN_00372170(*(undefined4 *)(param_1 + 0x274),1);
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x278) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x278) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x278),auStack_40);
      FUN_00372170(*(undefined4 *)(param_1 + 0x278),1);
      return;
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x27c) != 0) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x27c) + 0xc) + 0xc) = uVar2;
      *(undefined1 *)(*(int *)(param_1 + 0x27c) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x27c),auStack_40);
      FUN_00372170(*(undefined4 *)(param_1 + 0x27c),1);
      return;
    }
  }
  return;
}
