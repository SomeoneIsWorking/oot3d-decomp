// OoT3D decomp @ 0035d190  name=FUN_0035d190  size=180

uint FUN_0035d190(int param_1,int param_2)

{
  sbyte sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar3 = DAT_0035d248;
  uVar5 = *(undefined4 *)(DAT_0035d244 + param_1);
  uVar2 = *(ushort *)(DAT_0035d248 + 0x8a) & *(ushort *)(DAT_0035d24c + param_2 * 2);
  uVar4 = (uint)uVar2;
  if (uVar4 != 0) {
    sVar1 = *(sbyte *)(DAT_0035d250 + param_2);
    uVar4 = (uint)(uVar2 >> sVar1);
    iVar6 = DAT_0035d258 + uVar4 * 4;
    *(ushort *)(DAT_0035d248 + 0x8a) =
         *(ushort *)(DAT_0035d248 + 0x8a) & *(ushort *)(DAT_0035d254 + param_2 * 2);
    *(ushort *)(iVar3 + 0xb6) = *(ushort *)(iVar3 + 0xb6) ^ (ushort)(*(int *)(iVar6 + -4) << sVar1);
    iVar6 = DAT_0035d25c;
    if (param_2 == 2) {
      *(ushort *)(iVar3 + 0x8a) = *(ushort *)(iVar3 + 0x8a) | 0x100;
    }
    else if (param_2 == 0) {
      *(undefined *)(iVar3 + 0x80) = 0xff;
      *(undefined2 *)(iVar6 + 0x4a) = 1;
    }
    FUN_0034913c(param_1,uVar5);
    *(undefined2 *)(param_1 + 0x3100) = 10;
  }
  return uVar4 & 0xff;
}

