// OoT3D decomp @ 002b4b40  name=FUN_002b4b40  size=264

void FUN_002b4b40(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,4000,1);
  if (DAT_002b4c48 <= *(int *)(param_1 + 100)) {
    FUN_0034c128(param_2,param_1 + 0xb68);
    FUN_0034c128(param_2,param_1 + 0xb5c);
  }
  iVar3 = FUN_003731e0(param_1 + 0x1a4);
  uVar2 = DAT_002b4c50;
  uVar1 = DAT_002b4c4c;
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0xa5c) == 0) {
      FUN_00375c08(DAT_002b4c58,DAT_002b4c50,DAT_002b4c4c,DAT_002b4c54,param_1 + 0x1a4,3,2);
      *(undefined4 *)(param_1 + 0xa5c) = 0xf;
    }
    else if ((*(ushort *)(param_1 + 0x90) & 3) != 0) {
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
      *(undefined4 *)(param_1 + 100) = uVar2;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
      FUN_003301b8(param_1);
      FUN_00375bcc(param_1,DAT_002b4c5c);
      *(undefined4 *)(param_1 + 0x1e0) = uVar1;
      return;
    }
  }
  return;
}
