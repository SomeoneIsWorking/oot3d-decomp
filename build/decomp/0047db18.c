// OoT3D decomp @ 0047db18  name=FUN_0047db18  size=100

undefined4 FUN_0047db18(int param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;

  iVar1 = FUN_002e1ef0();
  uVar3 = 0;
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (*(ushort *)(DAT_0047db7c + param_1) & 1) * 0x60 + param_2 * 4 +
                       0x10b0);
    *(char *)(puVar2 + 0xe) = (char)param_3;
    if (param_3 == 0) {
      *(undefined1 *)((int)puVar2 + 0x39) = param_4;
    }
    *puVar2 = *puVar2 | 0x20000;
    uVar3 = 1;
  }
  return uVar3;
}
