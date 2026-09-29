// OoT3D decomp @ 003f532c  name=FUN_003f532c  size=260

void FUN_003f532c(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;

  iVar2 = FUN_00371e40();
  if (iVar2 != 0) {
    *(undefined2 *)(param_1 + 0x1c8) = 0;
    uVar1 = *(ushort *)(param_1 + 0x1c) & 0xff;
    if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 0) {
      FUN_00371808(param_2,DAT_003f5448,0xdc,param_1,0);
    }
    else if (uVar1 == 1) {
      FUN_00371808(param_2,DAT_003f5444,DAT_003f5440,param_1,0);
    }
    else if (uVar1 == 4) {
      FUN_00371808(param_2,DAT_003f5430,0xd2,param_1,0);
    }
    uVar3 = FUN_0036f848(*(undefined4 *)(param_2 + *(short *)(DAT_003f5434 + param_2) * 4 + 0xa54),3
                        );
    FUN_0036f7c0(uVar3,DAT_003f5438);
    FUN_0036f6b0(uVar3,1,1,5,0);
    FUN_0036f628(uVar3,10);
    *(undefined4 *)(param_1 + 0x1cc) = DAT_003f543c;
  }
  return;
}
