// OoT3D decomp @ 00333ddc  name=FUN_00333ddc  size=228

void FUN_00333ddc(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint6 uVar7;

  if (*(char *)(param_1 + 0x1ab) == '\0') {
    uVar7 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                             *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x10,0,0,0,
                             *(byte *)(param_1 + 0x1aa) + 2,1);
    iVar6 = (int)uVar7;
    if (iVar6 != 0) {
      uVar7 = (uint6)(iVar6 + 0x200);
    }
    *(undefined1 *)(param_1 + 0x1ac) = 1;
    if (iVar6 != 0) {
      *(short *)((int)uVar7 + 0x6c) = (short)(uVar7 >> 0x20);
    }
  }
  fVar1 = DAT_00333ec0;
  *(undefined2 *)(param_1 + 0x1a8) = 1;
  *(float *)(param_1 + 0x6c) = fVar1;
  uVar5 = DAT_00333ed0;
  uVar4 = DAT_00333ecc;
  uVar3 = DAT_00333ec8;
  uVar2 = DAT_00333ec4;
  if (fVar1 < *(float *)(param_1 + 0x88)) {
    iVar6 = 0;
    do {
      FUN_00368a98(uVar5,uVar4,uVar3,uVar2,param_2,param_1 + 0x28);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x28);
  }
  *(undefined4 *)(param_1 + 0x1a4) = DAT_00333ed4;
  return;
}
