// OoT3D decomp @ 00464730  name=FUN_00464730  size=192

void FUN_00464730(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [48];

  iVar1 = *param_2;
  local_4c = *(undefined4 *)(iVar1 + 0x18);
  local_48 = *(undefined4 *)(iVar1 + 0x1c);
  local_44 = *(undefined4 *)(iVar1 + 0x20);
  iVar1 = (uint)*(ushort *)(param_2[1] + param_3 * 2) + iVar1;
  if (*(short *)(iVar1 + 0xc) == 2) {
    FUN_002dd628();
  }
  else {
    FUN_002dd5d4(*(undefined4 *)(param_1 + 8),param_1 + 0x90,(int)*(short *)(iVar1 + 0xe),
                 iVar1 + *(short *)(iVar1 + 0x10),&local_4c);
  }
  FUN_00372224(auStack_40,param_4);
  iVar3 = 0;
  if (0 < *(short *)(iVar1 + 0xe)) {
    do {
      iVar2 = param_1 + iVar3 * 0x30;
      FUN_0036c174(iVar2 + 0x90,auStack_40,iVar2 + 0x90);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(short *)(iVar1 + 0xe));
  }
  return;
}
