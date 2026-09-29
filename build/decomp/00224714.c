// OoT3D decomp @ 00224714  name=FUN_00224714  size=208

void FUN_00224714(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined1 auStack_38 [48];

  uVar3 = *(ushort *)(param_1 + 0x1c) & 0xff;
  if (((((uVar3 == 0x18 || uVar3 == 0x19) || (iVar1 = FUN_0035a3c4(param_2,1), iVar1 != 0)) ||
       (3 < *(int *)(DAT_002247e4 + 0x4e8))) || (*DAT_002247e8 == 0x324)) &&
     ((*(ushort *)(param_1 + 0x290) & 1) == 0)) {
    iVar2 = *(int *)(param_1 + 0x2a4);
    iVar1 = DAT_002247ec;
    if (iVar2 != DAT_002247ec) {
      iVar1 = DAT_002247f0;
    }
    if (iVar2 != DAT_002247ec && iVar2 != iVar1) {
      FUN_00372224(auStack_38,param_1 + 0x148);
      FUN_00371348(DAT_002247f4,DAT_002247f4,DAT_002247f4,auStack_38,1);
      FUN_00373bec(*(undefined4 *)(param_1 + 0x2c0));
      FUN_003334b4(param_1 + 0x1a4,auStack_38,0,0,param_1,0);
    }
  }
  return;
}
