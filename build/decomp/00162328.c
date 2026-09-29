// OoT3D decomp @ 00162328  name=FUN_00162328  size=1244

void FUN_00162328(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 auStack_2ac [4];
  undefined1 auStack_2a8 [576];
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_48;

  FUN_00350820(auStack_2a8,DAT_001626f8,0x24,0x10);
  FUN_003510b0(param_1,DAT_001626fc);
  uVar5 = 0;
  FUN_00372f38(param_1,param_2,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x394,7);
  *(undefined4 *)(param_1 + 0x528) = 0;
  *(undefined1 *)(param_1 + 0xb7) = 4;
  FUN_00350eb8(param_2,param_1 + 0x580);
  FUN_00350d48(param_2,param_1 + 0x580,param_1,DAT_00162700,param_1 + 0x5a0);
  *(short *)(param_1 + 0x53c) = *(short *)(param_1 + 0x1c) >> 8;
  if ((*(ushort *)(param_1 + 0x1c) & 0x80) != 0) {
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 0xff00;
  }
  if (*(short *)(param_1 + 0x1c) < 0) {
    FUN_00372d4c(DAT_0016270c,DAT_00162704,param_1 + 0xbc,DAT_00162708);
  }
  uVar1 = DAT_00162718;
  fVar7 = DAT_00162714;
  uVar8 = DAT_00162710;
  if ((*(ushort *)(param_1 + 0x1c) & 0xff00) == 0) {
    *(undefined4 *)(param_1 + 0x524) = 2;
    *(undefined4 *)(param_1 + 0x530) = 1;
    *(undefined4 *)(param_1 + 100) = uVar8;
    *(undefined4 *)(param_1 + 0x70) = uVar8;
    *(undefined4 *)(param_1 + 0x6c) = uVar8;
    uVar5 = 0xb;
    *(undefined4 *)(param_1 + 0x52c) = DAT_00162c24;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x534) = 0;
    *(float *)(param_1 + 0x55c) = fVar7;
    *(undefined4 *)(param_1 + 0x560) = uVar1;
    fVar2 = DAT_0016271c;
    *(undefined1 *)(*(int *)(param_1 + 0x59c) + 0x15) = 9;
    **(undefined4 **)(param_1 + 0x59c) = 0xffcfffff;
    *(undefined1 *)(*(int *)(param_1 + 0x59c) + 5) = 8;
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x53c),(byte)(in_fpscr >> 0x15) & 3
                                      );
    *(float *)(param_1 + 0x54c) = fVar6 * fVar2;
    *(undefined1 *)(param_1 + 0x573) = 0xff;
    *(undefined4 *)(param_1 + 0x530) = 0;
    FUN_0037572c(DAT_00162720,param_1);
    uVar3 = DAT_00162b70;
    switch(*(undefined2 *)(param_1 + 0x1c)) {
    case 0xfffb:
      *(char *)(param_1 + 0x570) = (char)((int)(uint)*(ushort *)(param_1 + 0x53c) >> 4);
      *(undefined4 *)(*(int *)(param_1 + 0x59c) + 0x34) = uVar3;
      FUN_0037572c(DAT_00162b74,param_1);
    case 0xfffc:
      *(undefined1 *)(param_1 + 0x123) = 0x1e;
      uVar5 = DAT_00162734;
      fVar7 = (float)VectorUnsignedToFloat
                               (*(ushort *)(param_1 + 0x53c) & 0xf,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x54c) = fVar7 * fVar2;
      *(undefined4 *)(param_1 + 0xa0) = uVar5;
      *(undefined1 *)(param_1 + 0x575) = 0xff;
      *(undefined1 *)(param_1 + 0xb7) = 1;
      FUN_0036e734(param_1 + 0x1a4,0);
      *(undefined4 *)(param_1 + 0x530) = 1;
      *(undefined2 *)(param_1 + 0x53c) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    case 0xfffd:
      *(undefined1 *)(param_1 + 0x123) = 0x1d;
      *(undefined4 *)(param_1 + 0xa0) = DAT_00162b5c;
      *(char *)(param_1 + 0x570) = (char)*(undefined2 *)(param_1 + 0x53c);
      local_61 = 0xff;
      local_62 = 0xff;
      local_5e = 0xff;
      local_63 = 0xff;
      local_5f = 0xff;
      local_64 = 0xff;
      local_65 = 0xff;
      local_5a = 0xff;
      local_60 = 0xff;
      local_66 = 0xff;
      local_5b = 0xff;
      local_67 = 0xff;
      local_5c = 0xff;
      local_68 = 0xff;
      local_50 = 2;
      local_59 = 0;
      local_5d = 0;
      local_58 = 0x10;
      local_48 = 0x10;
      local_54 = 0;
      FUN_00350660(param_2,param_1 + 0x578,1,0,0,auStack_2ac);
      FUN_0036e734(param_1 + 0x1a4,0);
      *(undefined4 *)(param_1 + 0x6c) = uVar8;
      *(undefined4 *)(param_1 + 0x524) = 8;
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + DAT_00162b60;
      *(undefined1 *)(param_1 + 0x571) = 0;
      *(undefined4 *)(param_1 + 0x560) = uVar1;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    case 0xfffe:
      *(undefined1 *)(param_1 + 0x123) = 0x24;
      *(undefined4 *)(param_1 + 0xa0) = DAT_00162748;
      *(undefined1 *)(param_1 + 0x574) = 0xff;
      *(undefined1 *)(*(int *)(param_1 + 0x59c) + 4) = 1;
      FUN_0036e734(param_1 + 0x1a4,1);
      if (*(int *)(param_1 + 0x524) == 3) {
        *(undefined4 *)(param_1 + 0x6c) = DAT_0016274c;
        uVar5 = DAT_00162750;
        *(undefined2 *)(param_1 + 0x53c) = 1;
        *(undefined4 *)(param_1 + 0x534) = 0;
        *(undefined4 *)(param_1 + 0x70) = uVar5;
        uVar5 = DAT_00162754;
        *(undefined4 *)(param_1 + 0x530) = 0;
        *(undefined4 *)(param_1 + 100) = uVar5;
        *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffe;
      }
      else {
        *(undefined1 *)(param_1 + 0xb7) = 4;
        *(undefined4 *)(param_1 + 0x6c) = uVar8;
        *(undefined4 *)(param_1 + 0x534) = 0;
        *(undefined2 *)(param_1 + 0x53c) = 0;
        *(undefined4 *)(param_1 + 0x70) = uVar8;
        *(undefined4 *)(param_1 + 0x530) = 2;
        *(undefined4 *)(param_1 + 100) = uVar8;
        *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fVar7;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x30);
        *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffe;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      }
      uVar5 = 0xb;
      *(undefined4 *)(param_1 + 0x52c) = DAT_00162758;
      *(undefined4 *)(param_1 + 0x524) = 7;
    default:
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
      break;
    case 0xffff:
      *(undefined1 *)(param_1 + 0x123) = 0x1c;
      fVar7 = DAT_00162738;
      *(undefined4 *)(param_1 + 0xa0) = DAT_00162734;
      *(undefined1 *)(param_1 + 0x576) = 0xff;
      *(undefined1 *)(param_1 + 0x572) = 0xff;
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar7;
      FUN_0036e734(param_1 + 0x1a4,0);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  iVar4 = *(int *)(param_1 + 0x59c);
  uVar8 = VectorSignedToFloat((int)(short)(int)(*(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x48))
                              ,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(iVar4 + 0x44) = uVar8;
  TorchAnimationModel_00350508(param_1 + 0x500,param_2,0,uVar5);
  if (*(char *)(param_1 + 0x577) != '\0') {
    TorchAnimationModel_00350508(param_1 + 0x50c,param_2,0,uVar5);
  }
  *(undefined1 *)(param_1 + 0x19b) = 4;
  return;
}
