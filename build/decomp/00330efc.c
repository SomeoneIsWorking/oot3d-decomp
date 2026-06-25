// OoT3D decomp @ 00330efc  name=FUN_00330efc  size=248

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00330efc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  FUN_002d64f4();
  FUN_0036055c(param_3,param_4,DAT_00330ff4,0);
  iVar3 = DAT_00330ffc;
  iVar2 = DAT_00330ff8;
  *(byte *)(param_4 + 0x172a) = *(byte *)(param_4 + 0x172a) | 2;
  *(undefined2 *)(iVar2 + param_4) = *(undefined2 *)(param_4 + 0xbe);
  *(undefined4 *)(param_4 + 0x221c) = param_1;
  *(undefined4 *)(param_4 + 100) = param_2;
  *(ushort *)(param_4 + 0x90) = *(ushort *)(param_4 + 0x90) & 0xfffe;
  *(undefined *)(param_4 + 0x227f) = 0;
  if (*(char *)(param_4 + 0x1a7) != '\x01') {
    iVar3 = *(int *)(param_4 + 0x228c) + (uint)*(ushort *)(*(int *)(param_4 + 0x170c) + 0xf6) +
            0x1000011;
    cVar1 = *(char *)(DAT_00331000 + 0x80);
    if ((cVar1 == ';' || cVar1 == '<') || cVar1 == '=') {
      FUN_0036f59c(param_4,DAT_00331004);
    }
  }
  FUN_0036f59c(param_4,iVar3);
  if (*(char *)(param_4 + 2) != '\x02') {
    FUN_0037547c(DAT_00331008,param_4 + 0x28,4,DAT_0036aee8 + 0x60);
    return;
  }
  FUN_0036f59c(param_4,DAT_00331008 + (uint)*(ushort *)(*(int *)(param_4 + 0x170c) + 0xf4));
  return;
}

