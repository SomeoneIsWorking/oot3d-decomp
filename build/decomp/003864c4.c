// OoT3D decomp @ 003864c4  name=FUN_003864c4  size=212

void FUN_003864c4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;

  FUN_0032d314();
  iVar3 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar3 == 4) && (iVar3 = FUN_00346964(param_2), iVar3 != 0)) {
    iVar3 = FUN_00369f3c(param_2);
    if (iVar3 == 0) {
      uVar4 = FUN_0032d474(param_2);
      if (uVar4 == 0) {
        FUN_0036be34(param_2,uRam0038659c);
      }
      else {
        FUN_0036be34(param_2,uVar4 & 0xffff);
      }
      *(undefined4 *)(param_1 + 0x13c) = uRam003865a0;
    }
    else if (iVar3 == 1) {
      FUN_003725e0(param_2);
      *(undefined4 *)(param_1 + 0x13c) = uRam00386598;
      *(undefined2 *)(param_1 + 0x99c) = 0;
      FUN_003616fc(param_1,0);
      *(ushort *)(param_1 + 0x9c4) = *(ushort *)(param_1 + 0x9c4) & 0xffdf;
    }
  }
  iVar3 = *(int *)(DAT_0032d2fc + param_2);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x9bc),5,0x1000,0x400,unaff_r4,unaff_r5,
               unaff_r6);
  uVar2 = DAT_0032d304;
  uVar1 = DAT_0032d300;
  *(short *)(param_1 + 0x9be) = *(short *)(param_1 + 0x9be) + 1;
  FUN_003705a0(uVar2,uVar1,param_1 + 0x998);
  FUN_0036bee0(*(float *)(param_1 + 0x998) * *(float *)(param_1 + 0x998),
               *(float *)(iVar3 + 0xf4) + DAT_0032d308,DAT_0032d310,DAT_0032d30c,param_2);
  return;
}
