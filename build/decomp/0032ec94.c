// OoT3D decomp @ 0032ec94  name=FUN_0032ec94  size=508

void FUN_0032ec94(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  uint in_fpscr;
  
  uVar1 = DAT_0032ee90;
  if ((*(char *)(param_2 + 0x1a7) != '\x01') || ((*(ushort *)(param_2 + 0x90) & 1) == 0)) {
    FUN_0036b0fc(param_1,param_2);
    FUN_0036b02c(param_1,param_2);
    uVar3 = (uint)*(byte *)(param_2 + 0x1a7);
    bVar7 = uVar3 == 1;
    if (!bVar7) {
      uVar3 = *(uint *)(param_2 + 0x1714);
      bVar7 = (uVar3 & 0x400) == 0;
    }
    if (bVar7) {
      if (*(int *)(param_2 + 0x1708) == DAT_0032ee94) {
        FUN_0036055c(param_1,param_2,DAT_0032ee98,0);
        FUN_00359aa0(param_2 + 0x254,param_1,0x3b);
        *(undefined2 *)(DAT_0032ee9c + param_2) = 16000;
        *(undefined2 *)(param_2 + 0x2238) = 1;
      }
      else {
        FUN_0036055c(param_1,param_2,DAT_0032eea0,1);
        uVar2 = DAT_0032eea4;
        if ((*(ushort *)(param_2 + 0x90) & 1) == 0) {
          uVar6 = 0x3e;
        }
        else {
          uVar6 = 0x33;
        }
        uVar4 = FUN_003603c0(param_2 + 0x254,uVar6);
        uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00360190(DAT_0032eea8,uVar1,uVar4,uVar2,param_2 + 0x254,param_1,uVar6,2);
      }
    }
    else {
      *(uint *)(param_2 + 0x1714) = uVar3 & 0xfffffbff;
      FUN_00358bf4(param_1,param_2,0);
      *(undefined *)(param_2 + 0x2237) = 1;
    }
  }
  if (((((*(uint *)(param_2 + 0x1710) & 0x8000000) == 0) ||
       (*(float *)(param_2 + 0x88) < *(float *)(*(int *)(param_2 + 0x170c) + 0x2c))) &&
      (iVar5 = FUN_00358b3c(*(undefined4 *)(param_2 + 100),param_1,param_2,500), iVar5 != 0)) &&
     (FUN_0036f59c(param_2,DAT_0032eeac), 800 < *(short *)(param_2 + 0x2282))) {
    if (*(char *)(param_2 + 2) == '\x02') {
      FUN_0036f59c(param_2,DAT_0032eeb0 + (uint)*(ushort *)(*(int *)(param_2 + 0x170c) + 0xf4));
    }
    else {
      FUN_0036aeb4(param_2 + 0x28);
    }
  }
  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) & 0xfff3ffff | 0x8000000;
  *(uint *)(param_2 + 0x1714) = *(uint *)(param_2 + 0x1714) | 0x400;
  *(undefined4 *)(param_2 + 0x223c) = uVar1;
  FUN_003589dc(param_1,param_2);
  return;
}

