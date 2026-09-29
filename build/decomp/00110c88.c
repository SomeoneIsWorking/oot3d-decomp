// OoT3D decomp @ 00110c88  name=FUN_00110c88  size=224

void FUN_00110c88(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;

  uVar3 = DAT_00110d68;
  uVar2 = (int)*(short *)(param_1 + 0x1c) & 0xff;
  if (uVar2 == 0) {
    iVar1 = FUN_0036a83c(param_1);
    if (iVar1 == 0) {
      if (*(short *)(param_1 + 0x240) < 1) {
        *(undefined4 *)(param_1 + 0x1bc) = uVar3;
        iVar1 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
        if ((iVar1 != 0) &&
           (FUN_0036beac(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a),
           (*(ushort *)(param_1 + 0x1c) & 0xff) == 4)) {
          uVar3 = 0;
          FUN_0036a2dc(param_2,param_1,0);
          FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_00110d6c,uVar3);
          return;
        }
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x240) = 9;
    }
  }
  else if ((uVar2 == 2) &&
          (iVar1 = FUN_0036e864(param_2,(uint)((int)*(short *)(param_1 + 0x1c) << 0x12) >> 0x1a,
                                param_3,param_4,param_4), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  }
  return;
}
