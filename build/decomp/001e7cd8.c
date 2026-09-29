// OoT3D decomp @ 001e7cd8  name=FUN_001e7cd8  size=208

void FUN_001e7cd8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  uVar1 = DAT_001e7dac;
  uVar6 = *(uint *)(param_1 + 0x98);
  if ((int)uVar6 < DAT_001e7da8) {
    uVar3 = (uint)*(byte *)(param_1 + 0x1e6);
    bVar5 = uVar3 == 0;
    if (bVar5) {
      uVar3 = param_1 + 0x100;
      uVar6 = (uint)*(ushort *)(param_1 + 0x1e2);
    }
    if (bVar5 && uVar6 == 0) {
      *(undefined2 *)(uVar3 + 0xe2) = 0x5a;
      fVar7 = (float)FUN_003738a8();
      fVar9 = *(float *)(param_1 + 0x30);
      fVar8 = (float)FUN_003738a8(uVar1);
      iVar4 = z_actor_003738d0(fVar8 + *(float *)(param_1 + 0x28),
                               *(float *)(param_1 + 0x2c) + DAT_001e7db0,fVar7 + fVar9,
                               param_2 + 0x208c,param_2,0xb5,0,0,0,3,1);
      if (iVar4 != 0) {
        *(undefined2 *)(iVar4 + 0x1e0) = 0x1e;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x1e6) = uVar2;
  return;
}
